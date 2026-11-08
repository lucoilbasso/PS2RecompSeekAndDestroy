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

// Function: sceSifSearchModuleByAddress
// Address: 0x1b6298 - 0x1b6328
void sceSifSearchModuleByAddress_0x1b6298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifSearchModuleByAddress_0x1b6298");
#endif

    switch (ctx->pc) {
        case 0x1b62b0u: goto label_1b62b0;
        case 0x1b62c0u: goto label_1b62c0;
        case 0x1b6304u: goto label_1b6304;
        default: break;
    }

    ctx->pc = 0x1b6298u;

    // 0x1b6298: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b629c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b62a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b62a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b62a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b62a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62a8: 0xc06d6e4  jal         func_1B5B90
    ctx->pc = 0x1B62A8u;
    SET_GPR_U32(ctx, 31, 0x1B62B0u);
    ctx->pc = 0x1B62ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62A8u;
    // 0x1b62ac: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5B90u, 0x1B62A8u, 0x1B62B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62B0u;
label_1b62b0:
    // 0x1b62b0: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B62B0u;
    {
        const bool branch_taken_0x1b62b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62B0u;
        // 0x1b62b4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62b0) {
            ctx->pc = 0x1B6314u;
            goto label_1b6314;
        }
    }
    ctx->pc = 0x1B62B8u;
    // 0x1b62b8: 0xc06d724  jal         func_1B5C90
    ctx->pc = 0x1B62B8u;
    SET_GPR_U32(ctx, 31, 0x1B62C0u);
    ctx->pc = 0x1B5C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5C90u, 0x1B62B8u, 0x1B62C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62C0u;
label_1b62c0:
    // 0x1b62c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B62C0u;
    {
        const bool branch_taken_0x1b62c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62C0u;
        // 0x1b62c4: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62c0) {
            ctx->pc = 0x1B62D4u;
            goto label_1b62d4;
        }
    }
    ctx->pc = 0x1B62C8u;
    // 0x1b62c8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b62cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B62CCu;
    {
        const bool branch_taken_0x1b62cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62CCu;
        // 0x1b62d0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62cc) {
            ctx->pc = 0x1B6314u;
            goto label_1b6314;
        }
    }
    ctx->pc = 0x1B62D4u;
label_1b62d4:
    // 0x1b62d4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b62d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b62d8: 0x2607b400  addiu       $a3, $s0, -0x4C00
    ctx->pc = 0x1b62d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947840));
    // 0x1b62dc: 0xae11b400  sw          $s1, -0x4C00($s0)
    ctx->pc = 0x1b62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947840), GPR_U32(ctx, 17));
    // 0x1b62e0: 0x2484b600  addiu       $a0, $a0, -0x4A00
    ctx->pc = 0x1b62e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
    // 0x1b62e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b62e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b62e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b62e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b62ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b62ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62f0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b62f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b62f4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b62f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62f8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b62f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b62fc: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B62FCu;
    SET_GPR_U32(ctx, 31, 0x1B6304u);
    ctx->pc = 0x1B6300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62FCu;
    // 0x1b6300: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B62FCu, 0x1B6304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6304u;
label_1b6304:
    // 0x1b6304: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6304u;
    {
        const bool branch_taken_0x1b6304 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b6304) {
            ctx->pc = 0x1B6308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6304u;
            // 0x1b6308: 0x8e02b400  lw          $v0, -0x4C00($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6314u;
            goto label_1b6314;
        }
    }
    ctx->pc = 0x1B630Cu;
    // 0x1b630c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b6310: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b6314:
    // 0x1b6314: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6318: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b6318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b631c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b631cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6320: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6320u;
        // 0x1b6324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6328u;
}
