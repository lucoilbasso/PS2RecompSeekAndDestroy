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

// Function: entry_0011bc08
// Address: 0x11bc08 - 0x11bc34
void entry_0011bc08_0x11bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bc08_0x11bc08");
#endif

    ctx->pc = 0x11bc08u;

    // 0x11bc08: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x11bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x11bc0c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x11bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x11bc10: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x11bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x11bc14: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x11bc14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11bc18: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x11bc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x11bc1c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x11bc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11bc20: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x11bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x11bc24: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x11bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x11bc28: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x11bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x11bc2c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x11BC2Cu;
    SET_GPR_U32(ctx, 31, 0x11BC34u);
    ctx->pc = 0x11BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC2Cu;
    // 0x11bc30: 0xacc00010  sw          $zero, 0x10($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x11BC2Cu, 0x11BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC34u;
}
