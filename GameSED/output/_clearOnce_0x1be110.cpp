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

// Function: _clearOnce
// Address: 0x1be110 - 0x1be170
void _clearOnce_0x1be110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_clearOnce_0x1be110");
#endif

    switch (ctx->pc) {
        case 0x1be12cu: goto label_1be12c;
        default: break;
    }

    ctx->pc = 0x1be110u;

    // 0x1be110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be11c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1be11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1be120: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1be120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1be124: 0xc07023e  jal         func_1C08F8
    ctx->pc = 0x1BE124u;
    SET_GPR_U32(ctx, 31, 0x1BE12Cu);
    ctx->pc = 0x1BE128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE124u;
    // 0x1be128: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08F8u, 0x1BE124u, 0x1BE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE12Cu;
label_1be12c:
    // 0x1be12c: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x1be12cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x1be130: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1be130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1be134: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1be134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1be138: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1be138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1be13c: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x1be13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x1be140: 0x34631b00  ori         $v1, $v1, 0x1B00
    ctx->pc = 0x1be140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6912);
    // 0x1be144: 0x34843300  ori         $a0, $a0, 0x3300
    ctx->pc = 0x1be144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13056);
    // 0x1be148: 0xae110590  sw          $s1, 0x590($s0)
    ctx->pc = 0x1be148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 17));
    // 0x1be14c: 0xae020594  sw          $v0, 0x594($s0)
    ctx->pc = 0x1be14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 2));
    // 0x1be150: 0xae0306d0  sw          $v1, 0x6D0($s0)
    ctx->pc = 0x1be150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 3));
    // 0x1be154: 0xae0406d4  sw          $a0, 0x6D4($s0)
    ctx->pc = 0x1be154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1748), GPR_U32(ctx, 4));
    // 0x1be158: 0xae000810  sw          $zero, 0x810($s0)
    ctx->pc = 0x1be158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
    // 0x1be15c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1be15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be160: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1be160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be168: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE168u;
        // 0x1be16c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE170u;
}
