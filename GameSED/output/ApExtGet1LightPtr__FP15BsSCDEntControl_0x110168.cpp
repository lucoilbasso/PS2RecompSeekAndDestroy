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

// Function: ApExtGet1LightPtr__FP15BsSCDEntControl
// Address: 0x110168 - 0x1101f0
void ApExtGet1LightPtr__FP15BsSCDEntControl_0x110168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApExtGet1LightPtr__FP15BsSCDEntControl_0x110168");
#endif

    switch (ctx->pc) {
        case 0x110194u: goto label_110194;
        case 0x1101c0u: goto label_1101c0;
        case 0x1101d8u: goto label_1101d8;
        default: break;
    }

    ctx->pc = 0x110168u;

    // 0x110168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11016c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11016cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110174: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x110178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11017c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110180: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x110180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x110184: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x110184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x110188: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11018c: 0xc04110c  jal         func_104430
    ctx->pc = 0x11018Cu;
    SET_GPR_U32(ctx, 31, 0x110194u);
    ctx->pc = 0x110190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11018Cu;
    // 0x110190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x11018Cu, 0x110194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110194u;
label_110194:
    // 0x110194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110198: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x110198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x11019c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x11019cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1101a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1101A0u;
    {
        const bool branch_taken_0x1101a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1101A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101A0u;
        // 0x1101a4: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101a0) {
            ctx->pc = 0x1101B0u;
            goto label_1101b0;
        }
    }
    ctx->pc = 0x1101A8u;
    // 0x1101a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1101A8u;
    {
        const bool branch_taken_0x1101a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101A8u;
        // 0x1101ac: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101a8) {
            ctx->pc = 0x1101D8u;
            goto label_1101d8;
        }
    }
    ctx->pc = 0x1101B0u;
label_1101b0:
    // 0x1101b0: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1101B0u;
    {
        const bool branch_taken_0x1101b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1101B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101B0u;
        // 0x1101b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101b0) {
            ctx->pc = 0x1101DCu;
            goto label_1101dc;
        }
    }
    ctx->pc = 0x1101B8u;
    // 0x1101b8: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x1101B8u;
    SET_GPR_U32(ctx, 31, 0x1101C0u);
    ctx->pc = 0x1101BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101B8u;
    // 0x1101bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x1101B8u, 0x1101C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101C0u;
label_1101c0:
    // 0x1101c0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1101c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1101c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1101c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101c8: 0x24a53c88  addiu       $a1, $a1, 0x3C88
    ctx->pc = 0x1101c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15496));
    // 0x1101cc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1101ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1101d0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1101D0u;
    SET_GPR_U32(ctx, 31, 0x1101D8u);
    ctx->pc = 0x1101D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101D0u;
    // 0x1101d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1101D0u, 0x1101D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101D8u;
label_1101d8:
    // 0x1101d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1101d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1101dc:
    // 0x1101dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1101dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1101e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1101e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1101e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1101e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1101e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1101E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1101ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101E8u;
        // 0x1101ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1101E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1101F0u;
}
