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

// Function: entry_001912c8
// Address: 0x1912c8 - 0x1912e8
void entry_001912c8_0x1912c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001912c8_0x1912c8");
#endif

    switch (ctx->pc) {
        case 0x1912d8u: goto label_1912d8;
        default: break;
    }

    ctx->pc = 0x1912c8u;

    // 0x1912c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1912c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1912cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1912ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1912d0: 0xc062cb0  jal         func_18B2C0
    ctx->pc = 0x1912D0u;
    SET_GPR_U32(ctx, 31, 0x1912D8u);
    ctx->pc = 0x1912D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912D0u;
    // 0x1912d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x1912D0u, 0x1912D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912D8u;
label_1912d8:
    // 0x1912d8: 0x24020176  addiu       $v0, $zero, 0x176
    ctx->pc = 0x1912d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x1912dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1912dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1912e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1912e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912e4: 0xae200270  sw          $zero, 0x270($s1)
    ctx->pc = 0x1912e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
    ctx->pc = 0x1912e8u;
}
