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

// Function: entry_001ca138
// Address: 0x1ca138 - 0x1ca208
void entry_001ca138_0x1ca138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca138_0x1ca138");
#endif

    switch (ctx->pc) {
        case 0x1ca160u: goto label_1ca160;
        case 0x1ca170u: goto label_1ca170;
        case 0x1ca180u: goto label_1ca180;
        case 0x1ca194u: goto label_1ca194;
        default: break;
    }

    ctx->pc = 0x1ca138u;

    // 0x1ca138: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x1ca138u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca13c: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x1ca13cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x1ca140: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ca140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca144: 0x2758024  and         $s0, $s3, $s5
    ctx->pc = 0x1ca144u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x1ca148: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x1ca148u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x1ca14c: 0x255b024  and         $s6, $s2, $s5
    ctx->pc = 0x1ca14cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & GPR_U64(ctx, 21));
    // 0x1ca150: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1ca150u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1ca154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca158: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1CA158u;
    SET_GPR_U32(ctx, 31, 0x1CA160u);
    ctx->pc = 0x1CA15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA158u;
    // 0x1ca15c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1CA158u, 0x1CA160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA160u;
label_1ca160:
    // 0x1ca160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca168: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1CA168u;
    SET_GPR_U32(ctx, 31, 0x1CA170u);
    ctx->pc = 0x1CA16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA168u;
    // 0x1ca16c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1CA168u, 0x1CA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA170u;
label_1ca170:
    // 0x1ca170: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ca170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca174: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ca174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca178: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1CA178u;
    SET_GPR_U32(ctx, 31, 0x1CA180u);
    ctx->pc = 0x1CA17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA178u;
    // 0x1ca17c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1CA178u, 0x1CA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA180u;
label_1ca180:
    // 0x1ca180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ca184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca188: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ca188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca18c: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1CA18Cu;
    SET_GPR_U32(ctx, 31, 0x1CA194u);
    ctx->pc = 0x1CA190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA18Cu;
    // 0x1ca190: 0x230802d  daddu       $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1CA18Cu, 0x1CA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA194u;
label_1ca194:
    // 0x1ca194: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x1ca194u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ca198: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x1ca198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1ca19c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1ca19cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1ca1a0: 0x286302d  daddu       $a2, $s4, $a2
    ctx->pc = 0x1ca1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 6));
    // 0x1ca1a4: 0x2158024  and         $s0, $s0, $s5
    ctx->pc = 0x1ca1a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 21));
    // 0x1ca1a8: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1ca1a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1ca1ac: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1ca1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1ca1b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ca1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ca1b4: 0xd4a02b  sltu        $s4, $a2, $s4
    ctx->pc = 0x1ca1b4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1ca1b8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1ca1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca1bc: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1ca1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ca1c0: 0x234882d  daddu       $s1, $s1, $s4
    ctx->pc = 0x1ca1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
    // 0x1ca1c4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1ca1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ca1c8: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1ca1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1ca1cc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1ca1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ca1d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ca1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca1d4: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x1ca1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x1ca1d8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1ca1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1ca1dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1ca1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1ca1e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ca1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ca1e4: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x1ca1e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ca1e8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1ca1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1ca1ec: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA1ECu;
    {
        const bool branch_taken_0x1ca1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1ECu;
        // 0x1ca1f0: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1ec) {
            ctx->pc = 0x1CA234u;
            return;
        }
    }
    ctx->pc = 0x1CA1F4u;
    // 0x1ca1f4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1ca1f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ca1f8: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x1ca1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1ca1fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ca1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca200: 0x528fa  dsrl        $a1, $a1, 3
    ctx->pc = 0x1ca200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
    // 0x1ca204: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1ca204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x1ca208u;
}
