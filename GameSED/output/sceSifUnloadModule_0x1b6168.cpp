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

// Function: sceSifUnloadModule
// Address: 0x1b6168 - 0x1b61f8
void sceSifUnloadModule_0x1b6168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifUnloadModule_0x1b6168");
#endif

    switch (ctx->pc) {
        case 0x1b6180u: goto label_1b6180;
        case 0x1b6190u: goto label_1b6190;
        case 0x1b61d4u: goto label_1b61d4;
        default: break;
    }

    ctx->pc = 0x1b6168u;

    // 0x1b6168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b616c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b6170: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b6170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b6174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6178: 0xc06d6e4  jal         func_1B5B90
    ctx->pc = 0x1B6178u;
    SET_GPR_U32(ctx, 31, 0x1B6180u);
    ctx->pc = 0x1B617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6178u;
    // 0x1b617c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5B90u, 0x1B6178u, 0x1B6180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6180u;
label_1b6180:
    // 0x1b6180: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B6180u;
    {
        const bool branch_taken_0x1b6180 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6180u;
        // 0x1b6184: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6180) {
            ctx->pc = 0x1B61E4u;
            goto label_1b61e4;
        }
    }
    ctx->pc = 0x1B6188u;
    // 0x1b6188: 0xc06d724  jal         func_1B5C90
    ctx->pc = 0x1B6188u;
    SET_GPR_U32(ctx, 31, 0x1B6190u);
    ctx->pc = 0x1B5C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5C90u, 0x1B6188u, 0x1B6190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6190u;
label_1b6190:
    // 0x1b6190: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6190u;
    {
        const bool branch_taken_0x1b6190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6190u;
        // 0x1b6194: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6190) {
            ctx->pc = 0x1B61A4u;
            goto label_1b61a4;
        }
    }
    ctx->pc = 0x1B6198u;
    // 0x1b6198: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b6198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b619c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B619Cu;
    {
        const bool branch_taken_0x1b619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B619Cu;
        // 0x1b61a0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b619c) {
            ctx->pc = 0x1B61E4u;
            goto label_1b61e4;
        }
    }
    ctx->pc = 0x1B61A4u;
label_1b61a4:
    // 0x1b61a4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b61a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b61a8: 0x2607b400  addiu       $a3, $s0, -0x4C00
    ctx->pc = 0x1b61a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947840));
    // 0x1b61ac: 0xae11b400  sw          $s1, -0x4C00($s0)
    ctx->pc = 0x1b61acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947840), GPR_U32(ctx, 17));
    // 0x1b61b0: 0x2484b600  addiu       $a0, $a0, -0x4A00
    ctx->pc = 0x1b61b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
    // 0x1b61b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b61b8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b61b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b61bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b61bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61c0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b61c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b61c4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b61c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b61c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b61cc: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B61CCu;
    SET_GPR_U32(ctx, 31, 0x1B61D4u);
    ctx->pc = 0x1B61D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61CCu;
    // 0x1b61d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B61CCu, 0x1B61D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61D4u;
label_1b61d4:
    // 0x1b61d4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B61D4u;
    {
        const bool branch_taken_0x1b61d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b61d4) {
            ctx->pc = 0x1B61D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B61D4u;
            // 0x1b61d8: 0x8e02b400  lw          $v0, -0x4C00($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B61E4u;
            goto label_1b61e4;
        }
    }
    ctx->pc = 0x1B61DCu;
    // 0x1b61dc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b61e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b61e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b61e4:
    // 0x1b61e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b61e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b61e8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b61e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b61ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b61ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b61f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B61F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61F0u;
        // 0x1b61f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B61F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B61F8u;
}
