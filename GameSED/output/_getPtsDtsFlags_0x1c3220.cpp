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

// Function: _getPtsDtsFlags
// Address: 0x1c3220 - 0x1c33ac
void _getPtsDtsFlags_0x1c3220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getPtsDtsFlags_0x1c3220");
#endif

    switch (ctx->pc) {
        case 0x1c32a0u: goto label_1c32a0;
        case 0x1c32b0u: goto label_1c32b0;
        case 0x1c32c4u: goto label_1c32c4;
        case 0x1c32e8u: goto label_1c32e8;
        default: break;
    }

    ctx->pc = 0x1c3220u;

    // 0x1c3220: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c3220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c3224: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1c3224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1c3228: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1c3228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1c322c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1c322cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3230: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c3230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c3234: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c3234u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3238: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1c3238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1c323c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c323cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3240: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c3240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c3244: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c3244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3248: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1c3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1c324c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1c324cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1c3250: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c3250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c3254: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1c3254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1c3258: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c325c: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1c325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1c3260: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C3260u;
    {
        const bool branch_taken_0x1c3260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3260u;
        // 0x1c3264: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3260) {
            ctx->pc = 0x1C32F8u;
            goto label_1c32f8;
        }
    }
    ctx->pc = 0x1C3268u;
    // 0x1c3268: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x1c3268u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1c326c: 0x4430024  bgezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C326Cu;
    {
        const bool branch_taken_0x1c326c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c326c) {
            ctx->pc = 0x1C3270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C326Cu;
            // 0x1c3270: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3300u;
            goto label_1c3300;
        }
    }
    ctx->pc = 0x1C3274u;
    // 0x1c3274: 0x8e770080  lw          $s7, 0x80($s3)
    ctx->pc = 0x1c3274u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1c3278: 0x6e20021  bltzl       $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C3278u;
    {
        const bool branch_taken_0x1c3278 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x1c3278) {
            ctx->pc = 0x1C327Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3278u;
            // 0x1c327c: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3300u;
            goto label_1c3300;
        }
    }
    ctx->pc = 0x1C3280u;
    // 0x1c3280: 0xde700088  ld          $s0, 0x88($s3)
    ctx->pc = 0x1c3280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x1c3284: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x1c3284u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c3288: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1c3288u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c328c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1c328cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1c3290: 0x32120001  andi        $s2, $s0, 0x1
    ctx->pc = 0x1c3290u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1c3294: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1c3294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1c3298: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1C3298u;
    SET_GPR_U32(ctx, 31, 0x1C32A0u);
    ctx->pc = 0x1C329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3298u;
    // 0x1c329c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1C3298u, 0x1C32A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32A0u;
label_1c32a0:
    // 0x1c32a0: 0x8e760090  lw          $s6, 0x90($s3)
    ctx->pc = 0x1c32a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1c32a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c32a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32a8: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1C32A8u;
    SET_GPR_U32(ctx, 31, 0x1C32B0u);
    ctx->pc = 0x1C32ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32A8u;
    // 0x1c32ac: 0x32c50001  andi        $a1, $s6, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1C32A8u, 0x1C32B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32B0u;
label_1c32b0:
    // 0x1c32b0: 0xde640078  ld          $a0, 0x78($s3)
    ctx->pc = 0x1c32b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c32b4: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1c32b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c32b8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x1c32b8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1c32bc: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1C32BCu;
    SET_GPR_U32(ctx, 31, 0x1C32C4u);
    ctx->pc = 0x1C32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32BCu;
    // 0x1c32c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1C32BCu, 0x1C32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32C4u;
label_1c32c4:
    // 0x1c32c4: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x1c32c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x1c32c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c32c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c32cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c32ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c32d4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1c32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1c32d8: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1c32d8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1c32dc: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x1c32dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c32e0: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1C32E0u;
    SET_GPR_U32(ctx, 31, 0x1C32E8u);
    ctx->pc = 0x1C32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32E0u;
    // 0x1c32e4: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1C32E0u, 0x1C32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32E8u;
label_1c32e8:
    // 0x1c32e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C32E8u;
    {
        const bool branch_taken_0x1c32e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32E8u;
        // 0x1c32ec: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32e8) {
            ctx->pc = 0x1C3300u;
            goto label_1c3300;
        }
    }
    ctx->pc = 0x1C32F0u;
    // 0x1c32f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C32F0u;
    {
        const bool branch_taken_0x1c32f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32F0u;
        // 0x1c32f4: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32f0) {
            ctx->pc = 0x1C3300u;
            goto label_1c3300;
        }
    }
    ctx->pc = 0x1C32F8u;
label_1c32f8:
    // 0x1c32f8: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x1c32f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1c32fc: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1c32fcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_1c3300:
    // 0x1c3300: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x1c3300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x1c3304: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c3304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3308: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3308u;
    {
        const bool branch_taken_0x1c3308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3308) {
            ctx->pc = 0x1C330Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3308u;
            // 0x1c330c: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3330u;
            goto label_1c3330;
        }
    }
    ctx->pc = 0x1C3310u;
    // 0x1c3310: 0xde6200f0  ld          $v0, 0xF0($s3)
    ctx->pc = 0x1c3310u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x1c3314: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3314u;
    {
        const bool branch_taken_0x1c3314 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3314) {
            ctx->pc = 0x1C3318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3314u;
            // 0x1c3318: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3330u;
            goto label_1c3330;
        }
    }
    ctx->pc = 0x1C331Cu;
    // 0x1c331c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1c331cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1c3320: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c3320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3324: 0xae6000f8  sw          $zero, 0xF8($s3)
    ctx->pc = 0x1c3324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x1c3328: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x1c3328u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x1c332c: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x1c332cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_1c3330:
    // 0x1c3330: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x1c3330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x1c3334: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x1c3334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1c3338: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1c3338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1c333c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x1c333cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x1c3340: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x1c3340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1c3344: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x1c3344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1c3348: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1c3348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1c334c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x1c334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1c3350: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1c3350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1c3354: 0xde840020  ld          $a0, 0x20($s4)
    ctx->pc = 0x1c3354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1c3358: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c3358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c335c: 0x630f8  dsll        $a2, $a2, 3
    ctx->pc = 0x1c335cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x1c3360: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x1c3360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x1c3364: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x1c3364u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x1c3368: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c3368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c336c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c336cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c3370: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c3370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c3374: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c3374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c3378: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1c3378u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c337c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c337cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3380: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1c3380u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3384: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c3384u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3388: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1c3388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c338c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c338cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3390: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1c3390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3394: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c3394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3398: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1c3398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c339c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c339cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c33a0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1c33a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1c33a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C33A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33A4u;
        // 0x1c33a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C33A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C33ACu;
}
