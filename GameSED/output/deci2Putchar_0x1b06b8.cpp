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

// Function: deci2Putchar
// Address: 0x1b06b8 - 0x1b0768
void deci2Putchar_0x1b06b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("deci2Putchar_0x1b06b8");
#endif

    switch (ctx->pc) {
        case 0x1b06f8u: goto label_1b06f8;
        default: break;
    }

    ctx->pc = 0x1b06b8u;

    // 0x1b06b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b06b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b06bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b06bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b06c0: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1b06c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1b06c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b06c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b06c8: 0x8e25a970  lw          $a1, -0x5690($s1)
    ctx->pc = 0x1b06c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x24A970u));
    // 0x1b06cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b06ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b06d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b06d4: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x1b06d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x1b06d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B06D8u;
    {
        const bool branch_taken_0x1b06d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06D8u;
        // 0x1b06dc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06d8) {
            ctx->pc = 0x1B0700u;
            goto label_1b0700;
        }
    }
    ctx->pc = 0x1B06E0u;
    // 0x1b06e0: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x1b06e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x1b06e4: 0xae20a970  sw          $zero, -0x5690($s1)
    ctx->pc = 0x1b06e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945136), GPR_U32(ctx, 0));
    // 0x1b06e8: 0x26428180  addiu       $v0, $s2, -0x7E80
    ctx->pc = 0x1b06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934912));
    // 0x1b06ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b06ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06f0: 0xc06de38  jal         func_1B78E0
    ctx->pc = 0x1B06F0u;
    SET_GPR_U32(ctx, 31, 0x1B06F8u);
    ctx->pc = 0x1B06F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06F0u;
    // 0x1b06f4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B78E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B78E0u, 0x1B06F0u, 0x1B06F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06F8u;
label_1b06f8:
    // 0x1b06f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B06F8u;
    {
        const bool branch_taken_0x1b06f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06F8u;
        // 0x1b06fc: 0x8e25a970  lw          $a1, -0x5690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06f8) {
            ctx->pc = 0x1B0704u;
            goto label_1b0704;
        }
    }
    ctx->pc = 0x1B0700u;
label_1b0700:
    // 0x1b0700: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x1b0700u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
label_1b0704:
    // 0x1b0704: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b0708: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B0708u;
    {
        const bool branch_taken_0x1b0708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0708u;
        // 0x1b070c: 0x26428180  addiu       $v0, $s2, -0x7E80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0708) {
            ctx->pc = 0x1B0740u;
            goto label_1b0740;
        }
    }
    ctx->pc = 0x1B0710u;
    // 0x1b0710: 0x26448180  addiu       $a0, $s2, -0x7E80
    ctx->pc = 0x1b0710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934912));
    // 0x1b0714: 0xae20a970  sw          $zero, -0x5690($s1)
    ctx->pc = 0x1b0714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945136), GPR_U32(ctx, 0));
    // 0x1b0718: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1b0718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b071c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b071cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0720: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1b0720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b0724: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b0724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0728: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b072c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b072cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0734: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b0734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0738: 0x806de38  j           func_1B78E0
    ctx->pc = 0x1B0738u;
    ctx->pc = 0x1B073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0738u;
    // 0x1b073c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B78E0u;
    kputs_0x1b78e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B0740u;
label_1b0740:
    // 0x1b0740: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1b0740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b0744: 0xae23a970  sw          $v1, -0x5690($s1)
    ctx->pc = 0x1b0744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945136), GPR_U32(ctx, 3));
    // 0x1b0748: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1b0748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b074c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1b074cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b0750: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b0750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0754: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0758: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b0758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b075c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b075cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0760: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0760u;
        // 0x1b0764: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0768u;
}
