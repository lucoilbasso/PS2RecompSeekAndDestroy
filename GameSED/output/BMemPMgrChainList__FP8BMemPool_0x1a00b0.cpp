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

// Function: BMemPMgrChainList__FP8BMemPool
// Address: 0x1a00b0 - 0x1a0124
void BMemPMgrChainList__FP8BMemPool_0x1a00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrChainList__FP8BMemPool_0x1a00b0");
#endif

    switch (ctx->pc) {
        case 0x1a00e8u: goto label_1a00e8;
        case 0x1a00fcu: goto label_1a00fc;
        default: break;
    }

    ctx->pc = 0x1a00b0u;

    // 0x1a00b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a00b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a00b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a00b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a00bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a00bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a00c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a00c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a00c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a00c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a00c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a00c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a00cc: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1a00ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a00d0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A00D0u;
    {
        const bool branch_taken_0x1a00d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00D0u;
        // 0x1a00d4: 0x3c120fff  lui         $s2, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00d0) {
            ctx->pc = 0x1A0108u;
            goto label_1a0108;
        }
    }
    ctx->pc = 0x1A00D8u;
    // 0x1a00d8: 0x3c130026  lui         $s3, 0x26
    ctx->pc = 0x1a00d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
    // 0x1a00dc: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x1a00dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x1a00e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a00e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a00e4: 0x0  nop
    ctx->pc = 0x1a00e4u;
    // NOP
label_1a00e8:
    // 0x1a00e8: 0x26648780  addiu       $a0, $s3, -0x7880
    ctx->pc = 0x1a00e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936448));
    // 0x1a00ec: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1a00ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a00f0: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x1a00f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x1a00f4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A00F4u;
    SET_GPR_U32(ctx, 31, 0x1A00FCu);
    ctx->pc = 0x1A00F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A00F4u;
    // 0x1a00f8: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A00F4u, 0x1A00FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A00FCu;
label_1a00fc:
    // 0x1a00fc: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1a00fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a0100: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A0100u;
    {
        const bool branch_taken_0x1a0100 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0100) {
            ctx->pc = 0x1A0104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0100u;
            // 0x1a0104: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A00E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a00e8;
        }
    }
    ctx->pc = 0x1A0108u;
label_1a0108:
    // 0x1a0108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a010c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a010cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0110: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a0110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0114: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a0114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0118: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a011c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A011Cu;
        // 0x1a0120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0124u;
}
