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

// Function: VcObjDrawSetup__FP13VcObjDrawWorkUi
// Address: 0x198fc0 - 0x19908c
void VcObjDrawSetup__FP13VcObjDrawWorkUi_0x198fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VcObjDrawSetup__FP13VcObjDrawWorkUi_0x198fc0");
#endif

    switch (ctx->pc) {
        case 0x199030u: goto label_199030;
        default: break;
    }

    ctx->pc = 0x198fc0u;

    // 0x198fc0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x198fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fc4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x198fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x198fc8: 0x24c20023  addiu       $v0, $a2, 0x23
    ctx->pc = 0x198fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 35));
    // 0x198fcc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x198fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fd0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x198fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x198fd4: 0x3c081100  lui         $t0, 0x1100
    ctx->pc = 0x198fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4352 << 16));
    // 0x198fd8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x198fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x198fdc: 0x3c050600  lui         $a1, 0x600
    ctx->pc = 0x198fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1536 << 16));
    // 0x198fe0: 0x3c036c22  lui         $v1, 0x6C22
    ctx->pc = 0x198fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27682 << 16));
    // 0x198fe4: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x198fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x198fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198fec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x198fecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x198ff0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x198ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x198ff4: 0xace40230  sw          $a0, 0x230($a3)
    ctx->pc = 0x198ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 560), GPR_U32(ctx, 4));
    // 0x198ff8: 0xace50234  sw          $a1, 0x234($a3)
    ctx->pc = 0x198ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 564), GPR_U32(ctx, 5));
    // 0x198ffc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x198ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x199000: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x199000u;
    {
        const bool branch_taken_0x199000 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x199004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199000u;
        // 0x199004: 0xace80008  sw          $t0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199000) {
            ctx->pc = 0x199018u;
            goto label_199018;
        }
    }
    ctx->pc = 0x199008u;
    // 0x199008: 0xace00238  sw          $zero, 0x238($a3)
    ctx->pc = 0x199008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 568), GPR_U32(ctx, 0));
    // 0x19900c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19900Cu;
    {
        const bool branch_taken_0x19900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19900Cu;
        // 0x199010: 0xace0023c  sw          $zero, 0x23C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19900c) {
            ctx->pc = 0x199028u;
            goto label_199028;
        }
    }
    ctx->pc = 0x199014u;
    // 0x199014: 0x0  nop
    ctx->pc = 0x199014u;
    // NOP
label_199018:
    // 0x199018: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x199018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x19901c: 0xace80238  sw          $t0, 0x238($a3)
    ctx->pc = 0x19901cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 568), GPR_U32(ctx, 8));
    // 0x199020: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x199020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x199024: 0xace2023c  sw          $v0, 0x23C($a3)
    ctx->pc = 0x199024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 2));
label_199028:
    // 0x199028: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19902c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x19902cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_199030:
    // 0x199030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199034: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x199038: 0x0  nop
    ctx->pc = 0x199038u;
    // NOP
    // 0x19903c: 0x0  nop
    ctx->pc = 0x19903cu;
    // NOP
    // 0x199040: 0x0  nop
    ctx->pc = 0x199040u;
    // NOP
    // 0x199044: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199044u;
    {
        const bool branch_taken_0x199044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199044u;
        // 0x199048: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199044) {
            ctx->pc = 0x199030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199030;
        }
    }
    ctx->pc = 0x19904Cu;
    // 0x19904c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19904cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x199050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199054: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x199054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x199058: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x199058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19905c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x19905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x199060: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x199060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x199064: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x199064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x199068: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x199068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x19906c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x19906cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x199070: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x199070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x199074: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x199074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x199078: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x199078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19907c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19907cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x199080: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x199080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x199084: 0x3e00008  jr          $ra
    ctx->pc = 0x199084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199084u;
        // 0x199088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19908Cu;
}
