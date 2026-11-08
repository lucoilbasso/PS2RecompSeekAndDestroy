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

// Function: entry_00183bf8
// Address: 0x183bf8 - 0x183c14
void entry_00183bf8_0x183bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183bf8_0x183bf8");
#endif

    ctx->pc = 0x183bf8u;

    // 0x183bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x183c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x183c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x183c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c0c: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x183C0Cu;
    SET_GPR_U32(ctx, 31, 0x183C14u);
    ctx->pc = 0x183C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C0Cu;
    // 0x183c10: 0x8c440170  lw          $a0, 0x170($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x183C0Cu, 0x183C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C14u;
}
