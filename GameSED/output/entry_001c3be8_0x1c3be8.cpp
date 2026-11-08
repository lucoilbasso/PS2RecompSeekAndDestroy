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

// Function: entry_001c3be8
// Address: 0x1c3be8 - 0x1c3c18
void entry_001c3be8_0x1c3be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3be8_0x1c3be8");
#endif

    switch (ctx->pc) {
        case 0x1c3c0cu: goto label_1c3c0c;
        default: break;
    }

    ctx->pc = 0x1c3be8u;

    // 0x1c3be8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1c3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1c3bec: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c3becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c3bf0: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x1c3bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x1c3bf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c3bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c3bf8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c3bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3bfc: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1c3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1c3c00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c3c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c04: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C3C04u;
    SET_GPR_U32(ctx, 31, 0x1C3C0Cu);
    ctx->pc = 0x1C3C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C04u;
    // 0x1c3c08: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C3C04u, 0x1C3C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C0Cu;
label_1c3c0c:
    // 0x1c3c0c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1c3c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c3c10: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3c14: 0x0  nop
    ctx->pc = 0x1c3c14u;
    // NOP
    ctx->pc = 0x1c3c18u;
}
