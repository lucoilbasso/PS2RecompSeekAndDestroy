#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001a95ac
// Address: 0x1a95ac - 0x1a95b4
void entry_001a95ac_0x1a95ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a95ac_0x1a95ac");
#endif

    ctx->pc = 0x1a95acu;

    // 0x1a95ac: 0xc069626  jal         func_1A5898
    ctx->pc = 0x1A95ACu;
    SET_GPR_U32(ctx, 31, 0x1A95B4u);
    ctx->pc = 0x1A95B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A95ACu;
    // 0x1a95b0: 0xb6270038  sdr         $a3, 0x38($s1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x1A95ACu, 0x1A95B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A95B4u;
}
