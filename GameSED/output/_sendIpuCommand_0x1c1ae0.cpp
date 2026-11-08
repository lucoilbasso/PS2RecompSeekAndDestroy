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

// Function: _sendIpuCommand
// Address: 0x1c1ae0 - 0x1c1b0c
void _sendIpuCommand_0x1c1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sendIpuCommand_0x1c1ae0");
#endif

    ctx->pc = 0x1c1ae0u;

    // 0x1c1ae0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1ae4: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x1c1ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x1c1ae8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c1ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c1aec: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1c1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1c1af0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1c1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1c1af4: 0x2463dcc0  addiu       $v1, $v1, -0x2340
    ctx->pc = 0x1c1af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958272));
    // 0x1c1af8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1c1af8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c1afc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1c1afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c1b00: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c1b04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B04u;
        // 0x1c1b08: 0xac820818  sw          $v0, 0x818($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1B0Cu;
}
