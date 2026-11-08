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

// Function: TrackSuspentionSetup__9ApcCqtank
// Address: 0x1618b8 - 0x162224
void TrackSuspentionSetup__9ApcCqtank_0x1618b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TrackSuspentionSetup__9ApcCqtank_0x1618b8");
#endif

    switch (ctx->pc) {
        case 0x1618f0u: goto label_1618f0;
        case 0x1618f8u: goto label_1618f8;
        case 0x161910u: goto label_161910;
        case 0x161924u: goto label_161924;
        case 0x161984u: goto label_161984;
        case 0x161994u: goto label_161994;
        case 0x1619c0u: goto label_1619c0;
        case 0x161a00u: goto label_161a00;
        case 0x161af8u: goto label_161af8;
        case 0x161bf8u: goto label_161bf8;
        case 0x161cf0u: goto label_161cf0;
        case 0x161de0u: goto label_161de0;
        case 0x161ef8u: goto label_161ef8;
        case 0x162018u: goto label_162018;
        case 0x16212cu: goto label_16212c;
        case 0x162134u: goto label_162134;
        case 0x162160u: goto label_162160;
        default: break;
    }

    ctx->pc = 0x1618b8u;

    // 0x1618b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1618b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1618bc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1618bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1618c0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1618c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1618c4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1618c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1618c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1618c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1618cc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1618ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1618d0: 0x269319c0  addiu       $s3, $s4, 0x19C0
    ctx->pc = 0x1618d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 6592));
    // 0x1618d4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1618d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1618d8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1618d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1618dc: 0x8e9101b8  lw          $s1, 0x1B8($s4)
    ctx->pc = 0x1618dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x1618e0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1618e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1618e4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1618e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1618e8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1618E8u;
    SET_GPR_U32(ctx, 31, 0x1618F0u);
    ctx->pc = 0x1618ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1618E8u;
    // 0x1618ec: 0x129180  sll         $s2, $s2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1618E8u, 0x1618F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1618F0u;
label_1618f0:
    // 0x1618f0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1618F0u;
    SET_GPR_U32(ctx, 31, 0x1618F8u);
    ctx->pc = 0x1618F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1618F0u;
    // 0x1618f4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1618F0u, 0x1618F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1618F8u;
label_1618f8:
    // 0x1618f8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1618f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1618fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1618fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161900: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x161900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161904: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x161904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x161908: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x161908u;
    SET_GPR_U32(ctx, 31, 0x161910u);
    ctx->pc = 0x16190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161908u;
    // 0x16190c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x161908u, 0x161910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161910u;
label_161910:
    // 0x161910: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161914: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x161914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x161918: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x161918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16191c: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x16191Cu;
    SET_GPR_U32(ctx, 31, 0x161924u);
    ctx->pc = 0x161920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16191Cu;
    // 0x161920: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x16191Cu, 0x161924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161924u;
label_161924:
    // 0x161924: 0x8e840c18  lw          $a0, 0xC18($s4)
    ctx->pc = 0x161924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3096)));
    // 0x161928: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161928u;
    {
        const bool branch_taken_0x161928 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161928u;
        // 0x16192c: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161928) {
            ctx->pc = 0x161940u;
            goto label_161940;
        }
    }
    ctx->pc = 0x161930u;
    // 0x161930: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x161930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x161934: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x161934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x161938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161938u;
    {
        const bool branch_taken_0x161938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161938u;
        // 0x16193c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161938) {
            ctx->pc = 0x161944u;
            goto label_161944;
        }
    }
    ctx->pc = 0x161940u;
label_161940:
    // 0x161940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161944:
    // 0x161944: 0x8e820c1c  lw          $v0, 0xC1C($s4)
    ctx->pc = 0x161944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3100)));
    // 0x161948: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161948u;
    {
        const bool branch_taken_0x161948 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161948u;
        // 0x16194c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161948) {
            ctx->pc = 0x161960u;
            goto label_161960;
        }
    }
    ctx->pc = 0x161950u;
    // 0x161950: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x161950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x161954: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161958u;
    {
        const bool branch_taken_0x161958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161958u;
        // 0x16195c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161958) {
            ctx->pc = 0x161964u;
            goto label_161964;
        }
    }
    ctx->pc = 0x161960u;
label_161960:
    // 0x161960: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x161960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161964:
    // 0x161964: 0x8e8219d4  lw          $v0, 0x19D4($s4)
    ctx->pc = 0x161964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6612)));
    // 0x161968: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x161968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16196c: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x16196cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x161970: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161974: 0xace20020  sw          $v0, 0x20($a3)
    ctx->pc = 0x161974u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
    // 0x161978: 0x8e8319d8  lw          $v1, 0x19D8($s4)
    ctx->pc = 0x161978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6616)));
    // 0x16197c: 0xc065dcc  jal         func_197730
    ctx->pc = 0x16197Cu;
    SET_GPR_U32(ctx, 31, 0x161984u);
    ctx->pc = 0x161980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16197Cu;
    // 0x161980: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197730u, 0x16197Cu, 0x161984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161984u;
label_161984:
    // 0x161984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161988: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16198c: 0xc065dcc  jal         func_197730
    ctx->pc = 0x16198Cu;
    SET_GPR_U32(ctx, 31, 0x161994u);
    ctx->pc = 0x161990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16198Cu;
    // 0x161990: 0x8ca60024  lw          $a2, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197730u, 0x16198Cu, 0x161994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161994u;
label_161994:
    // 0x161994: 0x8e8311b0  lw          $v1, 0x11B0($s4)
    ctx->pc = 0x161994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4528)));
    // 0x161998: 0x506001e0  beql        $v1, $zero, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x161998u;
    {
        const bool branch_taken_0x161998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161998) {
            ctx->pc = 0x16199Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161998u;
            // 0x16199c: 0x8e9001b8  lw          $s0, 0x1B8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16211Cu;
            goto label_16211c;
        }
    }
    ctx->pc = 0x1619A0u;
    // 0x1619a0: 0x8e8219c4  lw          $v0, 0x19C4($s4)
    ctx->pc = 0x1619a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
    // 0x1619a4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1619a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619a8: 0x184001db  blez        $v0, . + 4 + (0x1DB << 2)
    ctx->pc = 0x1619A8u;
    {
        const bool branch_taken_0x1619a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1619ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619A8u;
        // 0x1619ac: 0x8e8a19cc  lw          $t2, 0x19CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619a8) {
            ctx->pc = 0x162118u;
            goto label_162118;
        }
    }
    ctx->pc = 0x1619B0u;
    // 0x1619b0: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1619b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1619b4: 0x27ad0010  addiu       $t5, $sp, 0x10
    ctx->pc = 0x1619b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1619b8: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1619b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1619bc: 0x0  nop
    ctx->pc = 0x1619bcu;
    // NOP
label_1619c0:
    // 0x1619c0: 0x8e8219dc  lw          $v0, 0x19DC($s4)
    ctx->pc = 0x1619c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6620)));
    // 0x1619c4: 0x1582007c  bne         $t4, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1619C4u;
    {
        const bool branch_taken_0x1619c4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x1619C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619C4u;
        // 0x1619c8: 0xad400020  sw          $zero, 0x20($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619c4) {
            ctx->pc = 0x161BB8u;
            goto label_161bb8;
        }
    }
    ctx->pc = 0x1619CCu;
    // 0x1619cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1619ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1619d0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1619d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1619d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1619d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619d8: 0x8e8311b0  lw          $v1, 0x11B0($s4)
    ctx->pc = 0x1619d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4528)));
    // 0x1619dc: 0xad4e0020  sw          $t6, 0x20($t2)
    ctx->pc = 0x1619dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 14));
    // 0x1619e0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1619e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1619e4: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1619E4u;
    {
        const bool branch_taken_0x1619e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1619E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619E4u;
        // 0x1619e8: 0x46002906  mov.s       $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619e4) {
            ctx->pc = 0x161A84u;
            goto label_161a84;
        }
    }
    ctx->pc = 0x1619ECu;
    // 0x1619ec: 0xc786831c  lwc1        $f6, -0x7CE4($gp)
    ctx->pc = 0x1619ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1619f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1619f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619f4: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x1619f4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x1619f8: 0x268311c0  addiu       $v1, $s4, 0x11C0
    ctx->pc = 0x1619f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4544));
    // 0x1619fc: 0x0  nop
    ctx->pc = 0x1619fcu;
    // NOP
label_161a00:
    // 0x161a00: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x161a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161A04u;
    {
        const bool branch_taken_0x161a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a04) {
            ctx->pc = 0x161A1Cu;
            goto label_161a1c;
        }
    }
    ctx->pc = 0x161A0Cu;
    // 0x161a0c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161a10: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x161a10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a14: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x161A14u;
    {
        const bool branch_taken_0x161a14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a14) {
            ctx->pc = 0x161A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A14u;
            // 0x161a18: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A7Cu;
            goto label_161a7c;
        }
    }
    ctx->pc = 0x161A1Cu;
label_161a1c:
    // 0x161a1c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x161a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a20: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x161A20u;
    {
        const bool branch_taken_0x161a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a20) {
            ctx->pc = 0x161A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A20u;
            // 0x161a24: 0xc4600034  lwc1        $f0, 0x34($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A3Cu;
            goto label_161a3c;
        }
    }
    ctx->pc = 0x161A28u;
    // 0x161a28: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161a2c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x161a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a30: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x161A30u;
    {
        const bool branch_taken_0x161a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a30) {
            ctx->pc = 0x161A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A30u;
            // 0x161a34: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A7Cu;
            goto label_161a7c;
        }
    }
    ctx->pc = 0x161A38u;
    // 0x161a38: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x161a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161a3c:
    // 0x161a3c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x161a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161a40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161a44: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x161a44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a48: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x161A48u;
    {
        const bool branch_taken_0x161a48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a48) {
            ctx->pc = 0x161A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A48u;
            // 0x161a4c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A7Cu;
            goto label_161a7c;
        }
    }
    ctx->pc = 0x161A50u;
    // 0x161a50: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x161a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161A54u;
    {
        const bool branch_taken_0x161a54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A54u;
        // 0x161a58: 0xc4600038  lwc1        $f0, 0x38($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a54) {
            ctx->pc = 0x161A68u;
            goto label_161a68;
        }
    }
    ctx->pc = 0x161A5Cu;
    // 0x161a5c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x161a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161A60u;
    {
        const bool branch_taken_0x161a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a60) {
            ctx->pc = 0x161A6Cu;
            goto label_161a6c;
        }
    }
    ctx->pc = 0x161A68u;
label_161a68:
    // 0x161a68: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x161a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_161a6c:
    // 0x161a6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x161A6Cu;
    {
        const bool branch_taken_0x161a6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A6Cu;
        // 0x161a70: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a6c) {
            ctx->pc = 0x161A7Cu;
            goto label_161a7c;
        }
    }
    ctx->pc = 0x161A74u;
    // 0x161a74: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x161a74u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x161a78: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x161a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_161a7c:
    // 0x161a7c: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x161A7Cu;
    {
        const bool branch_taken_0x161a7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A7Cu;
        // 0x161a80: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a7c) {
            ctx->pc = 0x161A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161a00;
        }
    }
    ctx->pc = 0x161A84u;
label_161a84:
    // 0x161a84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x161a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x161A88u;
    {
        const bool branch_taken_0x161a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A88u;
        // 0x161a8c: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a88) {
            ctx->pc = 0x161AA8u;
            goto label_161aa8;
        }
    }
    ctx->pc = 0x161A90u;
    // 0x161a90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161a94: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x161a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x161a98: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161a9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161A9Cu;
    {
        const bool branch_taken_0x161a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A9Cu;
        // 0x161aa0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a9c) {
            ctx->pc = 0x161AACu;
            goto label_161aac;
        }
    }
    ctx->pc = 0x161AA4u;
    // 0x161aa4: 0x0  nop
    ctx->pc = 0x161aa4u;
    // NOP
label_161aa8:
    // 0x161aa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161aac:
    // 0x161aac: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x161aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x161ab0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161AB0u;
    {
        const bool branch_taken_0x161ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AB0u;
        // 0x161ab4: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ab0) {
            ctx->pc = 0x161AC8u;
            goto label_161ac8;
        }
    }
    ctx->pc = 0x161AB8u;
    // 0x161ab8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161abc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161ac0: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x161ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161ac4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x161ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_161ac8:
    // 0x161ac8: 0x8e8311b0  lw          $v1, 0x11B0($s4)
    ctx->pc = 0x161ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4528)));
    // 0x161acc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161ad0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x161ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x161ad4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x161ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x161ad8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x161ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x161adc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x161adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161ae0: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x161AE0u;
    {
        const bool branch_taken_0x161ae0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x161AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AE0u;
        // 0x161ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ae0) {
            ctx->pc = 0x161B7Cu;
            goto label_161b7c;
        }
    }
    ctx->pc = 0x161AE8u;
    // 0x161ae8: 0xc7858320  lwc1        $f5, -0x7CE0($gp)
    ctx->pc = 0x161ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x161aec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x161aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161af0: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x161af0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x161af4: 0x268311c0  addiu       $v1, $s4, 0x11C0
    ctx->pc = 0x161af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4544));
label_161af8:
    // 0x161af8: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x161af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161afc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161AFCu;
    {
        const bool branch_taken_0x161afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161afc) {
            ctx->pc = 0x161B14u;
            goto label_161b14;
        }
    }
    ctx->pc = 0x161B04u;
    // 0x161b04: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x161b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b0c: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x161B0Cu;
    {
        const bool branch_taken_0x161b0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161b0c) {
            ctx->pc = 0x161B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161B0Cu;
            // 0x161b10: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161B74u;
            goto label_161b74;
        }
    }
    ctx->pc = 0x161B14u;
label_161b14:
    // 0x161b14: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x161b14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b18: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x161B18u;
    {
        const bool branch_taken_0x161b18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161b18) {
            ctx->pc = 0x161B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161B18u;
            // 0x161b1c: 0xc4600034  lwc1        $f0, 0x34($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161B34u;
            goto label_161b34;
        }
    }
    ctx->pc = 0x161B20u;
    // 0x161b20: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x161b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b28: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x161B28u;
    {
        const bool branch_taken_0x161b28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161b28) {
            ctx->pc = 0x161B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161B28u;
            // 0x161b2c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161B74u;
            goto label_161b74;
        }
    }
    ctx->pc = 0x161B30u;
    // 0x161b30: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x161b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161b34:
    // 0x161b34: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x161b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161b38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161b3c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x161b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b40: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x161B40u;
    {
        const bool branch_taken_0x161b40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161b40) {
            ctx->pc = 0x161B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161B40u;
            // 0x161b44: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161B74u;
            goto label_161b74;
        }
    }
    ctx->pc = 0x161B48u;
    // 0x161b48: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x161b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161B4Cu;
    {
        const bool branch_taken_0x161b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B4Cu;
        // 0x161b50: 0xc4600038  lwc1        $f0, 0x38($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b4c) {
            ctx->pc = 0x161B60u;
            goto label_161b60;
        }
    }
    ctx->pc = 0x161B54u;
    // 0x161b54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x161b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161B58u;
    {
        const bool branch_taken_0x161b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161b58) {
            ctx->pc = 0x161B64u;
            goto label_161b64;
        }
    }
    ctx->pc = 0x161B60u;
label_161b60:
    // 0x161b60: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x161b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_161b64:
    // 0x161b64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x161B64u;
    {
        const bool branch_taken_0x161b64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B64u;
        // 0x161b68: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b64) {
            ctx->pc = 0x161B74u;
            goto label_161b74;
        }
    }
    ctx->pc = 0x161B6Cu;
    // 0x161b6c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x161b6cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x161b70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x161b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_161b74:
    // 0x161b74: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x161B74u;
    {
        const bool branch_taken_0x161b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B74u;
        // 0x161b78: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b74) {
            ctx->pc = 0x161AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161af8;
        }
    }
    ctx->pc = 0x161B7Cu;
label_161b7c:
    // 0x161b7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x161b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b80: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x161b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x161B84u;
    {
        const bool branch_taken_0x161b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B84u;
        // 0x161b88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b84) {
            ctx->pc = 0x161BA0u;
            goto label_161ba0;
        }
    }
    ctx->pc = 0x161B8Cu;
    // 0x161b8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161b90: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x161b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x161b94: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161b98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161B98u;
    {
        const bool branch_taken_0x161b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B98u;
        // 0x161b9c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b98) {
            ctx->pc = 0x161BA4u;
            goto label_161ba4;
        }
    }
    ctx->pc = 0x161BA0u;
label_161ba0:
    // 0x161ba0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x161ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161ba4:
    // 0x161ba4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x161ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x161ba8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x161ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x161bac: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x161BACu;
    {
        const bool branch_taken_0x161bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BACu;
        // 0x161bb0: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bac) {
            ctx->pc = 0x1620F0u;
            goto label_1620f0;
        }
    }
    ctx->pc = 0x161BB4u;
    // 0x161bb4: 0x0  nop
    ctx->pc = 0x161bb4u;
    // NOP
label_161bb8:
    // 0x161bb8: 0x8e8219e0  lw          $v0, 0x19E0($s4)
    ctx->pc = 0x161bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6624)));
    // 0x161bbc: 0x1582007c  bne         $t4, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x161BBCu;
    {
        const bool branch_taken_0x161bbc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x161BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BBCu;
        // 0x161bc0: 0x268611b0  addiu       $a2, $s4, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bbc) {
            ctx->pc = 0x161DB0u;
            goto label_161db0;
        }
    }
    ctx->pc = 0x161BC4u;
    // 0x161bc4: 0x8e8311b0  lw          $v1, 0x11B0($s4)
    ctx->pc = 0x161bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4528)));
    // 0x161bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bcc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x161bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x161bd0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x161bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x161bd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161bd8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x161bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x161bdc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x161bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161be0: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x161BE0u;
    {
        const bool branch_taken_0x161be0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x161BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BE0u;
        // 0x161be4: 0xad4e0020  sw          $t6, 0x20($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161be0) {
            ctx->pc = 0x161C7Cu;
            goto label_161c7c;
        }
    }
    ctx->pc = 0x161BE8u;
    // 0x161be8: 0xc7858324  lwc1        $f5, -0x7CDC($gp)
    ctx->pc = 0x161be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x161bec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x161becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bf0: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x161bf0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x161bf4: 0x268311c0  addiu       $v1, $s4, 0x11C0
    ctx->pc = 0x161bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4544));
label_161bf8:
    // 0x161bf8: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x161bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161bfc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161BFCu;
    {
        const bool branch_taken_0x161bfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161bfc) {
            ctx->pc = 0x161C14u;
            goto label_161c14;
        }
    }
    ctx->pc = 0x161C04u;
    // 0x161c04: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161c08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x161c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c0c: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x161C0Cu;
    {
        const bool branch_taken_0x161c0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161c0c) {
            ctx->pc = 0x161C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161C0Cu;
            // 0x161c10: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161C74u;
            goto label_161c74;
        }
    }
    ctx->pc = 0x161C14u;
label_161c14:
    // 0x161c14: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x161c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c18: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x161C18u;
    {
        const bool branch_taken_0x161c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161c18) {
            ctx->pc = 0x161C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161C18u;
            // 0x161c1c: 0xc4600034  lwc1        $f0, 0x34($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161C34u;
            goto label_161c34;
        }
    }
    ctx->pc = 0x161C20u;
    // 0x161c20: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161c24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x161c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c28: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x161C28u;
    {
        const bool branch_taken_0x161c28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161c28) {
            ctx->pc = 0x161C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161C28u;
            // 0x161c2c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161C74u;
            goto label_161c74;
        }
    }
    ctx->pc = 0x161C30u;
    // 0x161c30: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x161c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161c34:
    // 0x161c34: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x161c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161c38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161c3c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x161c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c40: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x161C40u;
    {
        const bool branch_taken_0x161c40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161c40) {
            ctx->pc = 0x161C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161C40u;
            // 0x161c44: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161C74u;
            goto label_161c74;
        }
    }
    ctx->pc = 0x161C48u;
    // 0x161c48: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x161c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161C4Cu;
    {
        const bool branch_taken_0x161c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C4Cu;
        // 0x161c50: 0xc4600038  lwc1        $f0, 0x38($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c4c) {
            ctx->pc = 0x161C60u;
            goto label_161c60;
        }
    }
    ctx->pc = 0x161C54u;
    // 0x161c54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x161c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161C58u;
    {
        const bool branch_taken_0x161c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161c58) {
            ctx->pc = 0x161C64u;
            goto label_161c64;
        }
    }
    ctx->pc = 0x161C60u;
label_161c60:
    // 0x161c60: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x161c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_161c64:
    // 0x161c64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x161C64u;
    {
        const bool branch_taken_0x161c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C64u;
        // 0x161c68: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c64) {
            ctx->pc = 0x161C74u;
            goto label_161c74;
        }
    }
    ctx->pc = 0x161C6Cu;
    // 0x161c6c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x161c6cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x161c70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x161c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_161c74:
    // 0x161c74: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x161C74u;
    {
        const bool branch_taken_0x161c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C74u;
        // 0x161c78: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c74) {
            ctx->pc = 0x161BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161bf8;
        }
    }
    ctx->pc = 0x161C7Cu;
label_161c7c:
    // 0x161c7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x161c7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c80: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x161C80u;
    {
        const bool branch_taken_0x161c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C80u;
        // 0x161c84: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c80) {
            ctx->pc = 0x161CA0u;
            goto label_161ca0;
        }
    }
    ctx->pc = 0x161C88u;
    // 0x161c88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161c8c: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x161c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x161c90: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161c94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161C94u;
    {
        const bool branch_taken_0x161c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C94u;
        // 0x161c98: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c94) {
            ctx->pc = 0x161CA4u;
            goto label_161ca4;
        }
    }
    ctx->pc = 0x161C9Cu;
    // 0x161c9c: 0x0  nop
    ctx->pc = 0x161c9cu;
    // NOP
label_161ca0:
    // 0x161ca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161ca4:
    // 0x161ca4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x161ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x161ca8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161CA8u;
    {
        const bool branch_taken_0x161ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CA8u;
        // 0x161cac: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ca8) {
            ctx->pc = 0x161CC0u;
            goto label_161cc0;
        }
    }
    ctx->pc = 0x161CB0u;
    // 0x161cb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161cb4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161cb8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x161cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161cbc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x161cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_161cc0:
    // 0x161cc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161cc4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x161cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x161cc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ccc: 0x8e8311b0  lw          $v1, 0x11B0($s4)
    ctx->pc = 0x161cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4528)));
    // 0x161cd0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x161cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161cd4: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x161CD4u;
    {
        const bool branch_taken_0x161cd4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x161CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CD4u;
        // 0x161cd8: 0x46002906  mov.s       $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161cd4) {
            ctx->pc = 0x161D74u;
            goto label_161d74;
        }
    }
    ctx->pc = 0x161CDCu;
    // 0x161cdc: 0xc7868328  lwc1        $f6, -0x7CD8($gp)
    ctx->pc = 0x161cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x161ce0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x161ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ce4: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x161ce4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x161ce8: 0x268311c0  addiu       $v1, $s4, 0x11C0
    ctx->pc = 0x161ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4544));
    // 0x161cec: 0x0  nop
    ctx->pc = 0x161cecu;
    // NOP
label_161cf0:
    // 0x161cf0: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x161cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161cf4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161CF4u;
    {
        const bool branch_taken_0x161cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161cf4) {
            ctx->pc = 0x161D0Cu;
            goto label_161d0c;
        }
    }
    ctx->pc = 0x161CFCu;
    // 0x161cfc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161d00: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x161d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161d04: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x161D04u;
    {
        const bool branch_taken_0x161d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161d04) {
            ctx->pc = 0x161D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161D04u;
            // 0x161d08: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D6Cu;
            goto label_161d6c;
        }
    }
    ctx->pc = 0x161D0Cu;
label_161d0c:
    // 0x161d0c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x161d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161d10: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x161D10u;
    {
        const bool branch_taken_0x161d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161d10) {
            ctx->pc = 0x161D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161D10u;
            // 0x161d14: 0xc4600034  lwc1        $f0, 0x34($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D2Cu;
            goto label_161d2c;
        }
    }
    ctx->pc = 0x161D18u;
    // 0x161d18: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161d1c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x161d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161d20: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x161D20u;
    {
        const bool branch_taken_0x161d20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161d20) {
            ctx->pc = 0x161D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161D20u;
            // 0x161d24: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D6Cu;
            goto label_161d6c;
        }
    }
    ctx->pc = 0x161D28u;
    // 0x161d28: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x161d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161d2c:
    // 0x161d2c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x161d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161d34: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x161d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161d38: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x161D38u;
    {
        const bool branch_taken_0x161d38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161d38) {
            ctx->pc = 0x161D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161D38u;
            // 0x161d3c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D6Cu;
            goto label_161d6c;
        }
    }
    ctx->pc = 0x161D40u;
    // 0x161d40: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x161d40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161d44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161D44u;
    {
        const bool branch_taken_0x161d44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D44u;
        // 0x161d48: 0xc4600038  lwc1        $f0, 0x38($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d44) {
            ctx->pc = 0x161D58u;
            goto label_161d58;
        }
    }
    ctx->pc = 0x161D4Cu;
    // 0x161d4c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x161d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161d50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161D50u;
    {
        const bool branch_taken_0x161d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d50) {
            ctx->pc = 0x161D5Cu;
            goto label_161d5c;
        }
    }
    ctx->pc = 0x161D58u;
label_161d58:
    // 0x161d58: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x161d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_161d5c:
    // 0x161d5c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x161D5Cu;
    {
        const bool branch_taken_0x161d5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D5Cu;
        // 0x161d60: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d5c) {
            ctx->pc = 0x161D6Cu;
            goto label_161d6c;
        }
    }
    ctx->pc = 0x161D64u;
    // 0x161d64: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x161d64u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x161d68: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x161d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_161d6c:
    // 0x161d6c: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x161D6Cu;
    {
        const bool branch_taken_0x161d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D6Cu;
        // 0x161d70: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d6c) {
            ctx->pc = 0x161CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161cf0;
        }
    }
    ctx->pc = 0x161D74u;
label_161d74:
    // 0x161d74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x161d74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d78: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x161d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x161D7Cu;
    {
        const bool branch_taken_0x161d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D7Cu;
        // 0x161d80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d7c) {
            ctx->pc = 0x161D98u;
            goto label_161d98;
        }
    }
    ctx->pc = 0x161D84u;
    // 0x161d84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161d88: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x161d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x161d8c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161d90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161D90u;
    {
        const bool branch_taken_0x161d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D90u;
        // 0x161d94: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d90) {
            ctx->pc = 0x161D9Cu;
            goto label_161d9c;
        }
    }
    ctx->pc = 0x161D98u;
label_161d98:
    // 0x161d98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x161d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161d9c:
    // 0x161d9c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x161d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x161da0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x161da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x161da4: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x161DA4u;
    {
        const bool branch_taken_0x161da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DA4u;
        // 0x161da8: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161da4) {
            ctx->pc = 0x1620F0u;
            goto label_1620f0;
        }
    }
    ctx->pc = 0x161DACu;
    // 0x161dac: 0x0  nop
    ctx->pc = 0x161dacu;
    // NOP
label_161db0:
    // 0x161db0: 0x25430010  addiu       $v1, $t2, 0x10
    ctx->pc = 0x161db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x161db4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x161db8: 0x46004146  mov.s       $f5, $f8
    ctx->pc = 0x161db8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[8]);
    // 0x161dbc: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x161DBCu;
    {
        const bool branch_taken_0x161dbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x161DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DBCu;
        // 0x161dc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dbc) {
            ctx->pc = 0x161E80u;
            goto label_161e80;
        }
    }
    ctx->pc = 0x161DC4u;
    // 0x161dc4: 0xc787832c  lwc1        $f7, -0x7CD4($gp)
    ctx->pc = 0x161dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x161dc8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x161dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161dcc: 0xc7868330  lwc1        $f6, -0x7CD0($gp)
    ctx->pc = 0x161dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x161dd0: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x161dd0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x161dd4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x161dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161dd8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x161dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ddc: 0x0  nop
    ctx->pc = 0x161ddcu;
    // NOP
label_161de0:
    // 0x161de0: 0x46042832  c.eq.s      $f5, $f4
    ctx->pc = 0x161de0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161de4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x161de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x161de8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x161DE8u;
    {
        const bool branch_taken_0x161de8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DE8u;
        // 0x161dec: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161de8) {
            ctx->pc = 0x161E28u;
            goto label_161e28;
        }
    }
    ctx->pc = 0x161DF0u;
    // 0x161df0: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x161df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161df4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161DF4u;
    {
        const bool branch_taken_0x161df4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161df4) {
            ctx->pc = 0x161E0Cu;
            goto label_161e0c;
        }
    }
    ctx->pc = 0x161DFCu;
    // 0x161dfc: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x161dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161e00: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x161e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161e04: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x161E04u;
    {
        const bool branch_taken_0x161e04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161e04) {
            ctx->pc = 0x161E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E04u;
            // 0x161e08: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161E70u;
            goto label_161e70;
        }
    }
    ctx->pc = 0x161E0Cu;
label_161e0c:
    // 0x161e0c: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x161e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161e10: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161E10u;
    {
        const bool branch_taken_0x161e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161e10) {
            ctx->pc = 0x161E28u;
            goto label_161e28;
        }
    }
    ctx->pc = 0x161E18u;
    // 0x161e18: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x161e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161e1c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x161e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161e20: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x161E20u;
    {
        const bool branch_taken_0x161e20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161e20) {
            ctx->pc = 0x161E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E20u;
            // 0x161e24: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161E70u;
            goto label_161e70;
        }
    }
    ctx->pc = 0x161E28u;
label_161e28:
    // 0x161e28: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x161e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161e2c: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x161e2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161e30: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x161e30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x161e34: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x161e34u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x161e38: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x161e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161e3c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x161e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161e40: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x161e40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x161e44: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x161e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161e48: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x161e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x161e4c: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x161e4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x161e50: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x161e50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x161e54: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x161e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161e58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161E58u;
    {
        const bool branch_taken_0x161e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E58u;
        // 0x161e5c: 0x46060002  mul.s       $f0, $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e58) {
            ctx->pc = 0x161E6Cu;
            goto label_161e6c;
        }
    }
    ctx->pc = 0x161E60u;
    // 0x161e60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x161e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161e64: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x161E64u;
    {
        const bool branch_taken_0x161e64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E64u;
        // 0x161e68: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e64) {
            ctx->pc = 0x161E84u;
            goto label_161e84;
        }
    }
    ctx->pc = 0x161E6Cu;
label_161e6c:
    // 0x161e6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_161e70:
    // 0x161e70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x161e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x161e74: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x161e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161e78: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x161E78u;
    {
        const bool branch_taken_0x161e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E78u;
        // 0x161e7c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e78) {
            ctx->pc = 0x161DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161de0;
        }
    }
    ctx->pc = 0x161E80u;
label_161e80:
    // 0x161e80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x161e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161e84:
    // 0x161e84: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x161E84u;
    {
        const bool branch_taken_0x161e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E84u;
        // 0x161e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e84) {
            ctx->pc = 0x161E90u;
            goto label_161e90;
        }
    }
    ctx->pc = 0x161E8Cu;
    // 0x161e8c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x161e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_161e90:
    // 0x161e90: 0x5040009d  beql        $v0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x161E90u;
    {
        const bool branch_taken_0x161e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161e90) {
            ctx->pc = 0x161E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E90u;
            // 0x161e94: 0x8e8219c4  lw          $v0, 0x19C4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162108u;
            goto label_162108;
        }
    }
    ctx->pc = 0x161E98u;
    // 0x161e98: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x161e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x161e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161ea0: 0x50620098  beql        $v1, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x161EA0u;
    {
        const bool branch_taken_0x161ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161ea0) {
            ctx->pc = 0x161EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161EA0u;
            // 0x161ea4: 0xad430020  sw          $v1, 0x20($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162104u;
            goto label_162104;
        }
    }
    ctx->pc = 0x161EA8u;
    // 0x161ea8: 0x58600097  blezl       $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x161EA8u;
    {
        const bool branch_taken_0x161ea8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x161ea8) {
            ctx->pc = 0x161EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161EA8u;
            // 0x161eac: 0x8e8219c4  lw          $v0, 0x19C4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162108u;
            goto label_162108;
        }
    }
    ctx->pc = 0x161EB0u;
    // 0x161eb0: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x161eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x161eb4: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x161EB4u;
    {
        const bool branch_taken_0x161eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161eb4) {
            ctx->pc = 0x161EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161EB4u;
            // 0x161eb8: 0x8e8219c4  lw          $v0, 0x19C4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162108u;
            goto label_162108;
        }
    }
    ctx->pc = 0x161EBCu;
    // 0x161ebc: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x161ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x161ec0: 0x54400091  bnel        $v0, $zero, . + 4 + (0x91 << 2)
    ctx->pc = 0x161EC0u;
    {
        const bool branch_taken_0x161ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161ec0) {
            ctx->pc = 0x161EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161EC0u;
            // 0x161ec4: 0x8e8219c4  lw          $v0, 0x19C4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162108u;
            goto label_162108;
        }
    }
    ctx->pc = 0x161EC8u;
    // 0x161ec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161ecc: 0x268711b0  addiu       $a3, $s4, 0x11B0
    ctx->pc = 0x161eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4528));
    // 0x161ed0: 0xad420020  sw          $v0, 0x20($t2)
    ctx->pc = 0x161ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 2));
    // 0x161ed4: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x161ed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ed8: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x161ed8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161edc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x161edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ee0: 0x25440010  addiu       $a0, $t2, 0x10
    ctx->pc = 0x161ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x161ee4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x161ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x161ee8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x161ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x161eec: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x161EECu;
    {
        const bool branch_taken_0x161eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EECu;
        // 0x161ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161eec) {
            ctx->pc = 0x161F9Cu;
            goto label_161f9c;
        }
    }
    ctx->pc = 0x161EF4u;
    // 0x161ef4: 0x0  nop
    ctx->pc = 0x161ef4u;
    // NOP
label_161ef8:
    // 0x161ef8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x161ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161efc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x161efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x161f00: 0x46012832  c.eq.s      $f5, $f1
    ctx->pc = 0x161f00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f04: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x161f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x161f08: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x161F08u;
    {
        const bool branch_taken_0x161f08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F08u;
        // 0x161f0c: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f08) {
            ctx->pc = 0x161F48u;
            goto label_161f48;
        }
    }
    ctx->pc = 0x161F10u;
    // 0x161f10: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x161f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f14: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161F14u;
    {
        const bool branch_taken_0x161f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f14) {
            ctx->pc = 0x161F2Cu;
            goto label_161f2c;
        }
    }
    ctx->pc = 0x161F1Cu;
    // 0x161f1c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x161f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161f20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x161f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f24: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x161F24u;
    {
        const bool branch_taken_0x161f24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f24) {
            ctx->pc = 0x161F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161F24u;
            // 0x161f28: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161F9Cu;
            goto label_161f9c;
        }
    }
    ctx->pc = 0x161F2Cu;
label_161f2c:
    // 0x161f2c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x161f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f30: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161F30u;
    {
        const bool branch_taken_0x161f30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f30) {
            ctx->pc = 0x161F48u;
            goto label_161f48;
        }
    }
    ctx->pc = 0x161F38u;
    // 0x161f38: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x161f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161f3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f40: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x161F40u;
    {
        const bool branch_taken_0x161f40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f40) {
            ctx->pc = 0x161F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161F40u;
            // 0x161f44: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161F9Cu;
            goto label_161f9c;
        }
    }
    ctx->pc = 0x161F48u;
label_161f48:
    // 0x161f48: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x161f48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161f4c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x161f4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161f50: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x161f50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x161f54: 0xf9a20000  sqc2        $vf2, 0x0($t5)
    ctx->pc = 0x161f54u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x161f58: 0xc7848334  lwc1        $f4, -0x7CCC($gp)
    ctx->pc = 0x161f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x161f5c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x161f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x161f60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x161f60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f64: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x161f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161f68: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x161f68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x161f6c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x161f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161f70: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x161f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x161f74: 0xc7828338  lwc1        $f2, -0x7CC8($gp)
    ctx->pc = 0x161f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161f78: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x161f78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x161f7c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x161f7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x161f80: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x161f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161F84u;
    {
        const bool branch_taken_0x161f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F84u;
        // 0x161f88: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f84) {
            ctx->pc = 0x161F98u;
            goto label_161f98;
        }
    }
    ctx->pc = 0x161F8Cu;
    // 0x161f8c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x161f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f90: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x161F90u;
    {
        const bool branch_taken_0x161f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f90) {
            ctx->pc = 0x161FB0u;
            goto label_161fb0;
        }
    }
    ctx->pc = 0x161F98u;
label_161f98:
    // 0x161f98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x161f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_161f9c:
    // 0x161f9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x161f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161fa0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x161fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161fa4: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x161FA4u;
    {
        const bool branch_taken_0x161fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FA4u;
        // 0x161fa8: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fa4) {
            ctx->pc = 0x161EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161ef8;
        }
    }
    ctx->pc = 0x161FACu;
    // 0x161fac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x161facu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161fb0:
    // 0x161fb0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x161FB0u;
    {
        const bool branch_taken_0x161fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161fb0) {
            ctx->pc = 0x161FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161FB0u;
            // 0x161fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161FC8u;
            goto label_161fc8;
        }
    }
    ctx->pc = 0x161FB8u;
    // 0x161fb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161fbc: 0x8d6301b4  lw          $v1, 0x1B4($t3)
    ctx->pc = 0x161fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 436)));
    // 0x161fc0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161fc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x161fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_161fc8:
    // 0x161fc8: 0xad220030  sw          $v0, 0x30($t1)
    ctx->pc = 0x161fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 2));
    // 0x161fcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161FCCu;
    {
        const bool branch_taken_0x161fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FCCu;
        // 0x161fd0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fcc) {
            ctx->pc = 0x161FE4u;
            goto label_161fe4;
        }
    }
    ctx->pc = 0x161FD4u;
    // 0x161fd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161fd8: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x161fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x161fdc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x161fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161fe0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x161fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_161fe4:
    // 0x161fe4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x161fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fe8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x161fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x161ff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161ff4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x161ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x161ff8: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x161FF8u;
    {
        const bool branch_taken_0x161ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x161FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FF8u;
        // 0x161ffc: 0x25230010  addiu       $v1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ff8) {
            ctx->pc = 0x1620B8u;
            goto label_1620b8;
        }
    }
    ctx->pc = 0x162000u;
    // 0x162000: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x162000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x162004: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x162004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162008: 0xc787833c  lwc1        $f7, -0x7CC4($gp)
    ctx->pc = 0x162008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x16200c: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x16200cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x162010: 0xc7868340  lwc1        $f6, -0x7CC0($gp)
    ctx->pc = 0x162010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x162014: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x162014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_162018:
    // 0x162018: 0x46042832  c.eq.s      $f5, $f4
    ctx->pc = 0x162018u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16201c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x16201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x162020: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x162020u;
    {
        const bool branch_taken_0x162020 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162020u;
        // 0x162024: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162020) {
            ctx->pc = 0x162060u;
            goto label_162060;
        }
    }
    ctx->pc = 0x162028u;
    // 0x162028: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x162028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16202c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16202Cu;
    {
        const bool branch_taken_0x16202c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16202c) {
            ctx->pc = 0x162044u;
            goto label_162044;
        }
    }
    ctx->pc = 0x162034u;
    // 0x162034: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x162034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162038: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x162038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16203c: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x16203Cu;
    {
        const bool branch_taken_0x16203c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16203c) {
            ctx->pc = 0x162040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16203Cu;
            // 0x162040: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1620A8u;
            goto label_1620a8;
        }
    }
    ctx->pc = 0x162044u;
label_162044:
    // 0x162044: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x162044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162048: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x162048u;
    {
        const bool branch_taken_0x162048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162048) {
            ctx->pc = 0x162060u;
            goto label_162060;
        }
    }
    ctx->pc = 0x162050u;
    // 0x162050: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x162050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162054: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x162054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162058: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x162058u;
    {
        const bool branch_taken_0x162058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162058) {
            ctx->pc = 0x16205Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162058u;
            // 0x16205c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1620A8u;
            goto label_1620a8;
        }
    }
    ctx->pc = 0x162060u;
label_162060:
    // 0x162060: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x162060u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162064: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x162064u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162068: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x162068u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16206c: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x16206cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162070: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x162070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162074: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x162074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162078: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x162078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x16207c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x16207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162080: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x162080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x162084: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x162084u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x162088: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x162088u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16208c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x16208cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162090: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x162090u;
    {
        const bool branch_taken_0x162090 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162090u;
        // 0x162094: 0x46060002  mul.s       $f0, $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162090) {
            ctx->pc = 0x1620A4u;
            goto label_1620a4;
        }
    }
    ctx->pc = 0x162098u;
    // 0x162098: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x162098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16209c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x16209Cu;
    {
        const bool branch_taken_0x16209c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1620A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16209Cu;
        // 0x1620a0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16209c) {
            ctx->pc = 0x1620C0u;
            goto label_1620c0;
        }
    }
    ctx->pc = 0x1620A4u;
label_1620a4:
    // 0x1620a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1620a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1620a8:
    // 0x1620a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1620a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1620ac: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1620acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1620b0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1620B0u;
    {
        const bool branch_taken_0x1620b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1620B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620B0u;
        // 0x1620b4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620b0) {
            ctx->pc = 0x162018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162018;
        }
    }
    ctx->pc = 0x1620B8u;
label_1620b8:
    // 0x1620b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1620b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1620bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1620c0:
    // 0x1620c0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1620C0u;
    {
        const bool branch_taken_0x1620c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620C0u;
        // 0x1620c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620c0) {
            ctx->pc = 0x1620E0u;
            goto label_1620e0;
        }
    }
    ctx->pc = 0x1620C8u;
    // 0x1620c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1620c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1620cc: 0x8d6301b4  lw          $v1, 0x1B4($t3)
    ctx->pc = 0x1620ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 436)));
    // 0x1620d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1620d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1620d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1620D4u;
    {
        const bool branch_taken_0x1620d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620D4u;
        // 0x1620d8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620d4) {
            ctx->pc = 0x1620E4u;
            goto label_1620e4;
        }
    }
    ctx->pc = 0x1620DCu;
    // 0x1620dc: 0x0  nop
    ctx->pc = 0x1620dcu;
    // NOP
label_1620e0:
    // 0x1620e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1620e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1620e4:
    // 0x1620e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1620e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1620e8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1620e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1620ec: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x1620ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_1620f0:
    // 0x1620f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1620F0u;
    {
        const bool branch_taken_0x1620f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620F0u;
        // 0x1620f4: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620f0) {
            ctx->pc = 0x162104u;
            goto label_162104;
        }
    }
    ctx->pc = 0x1620F8u;
    // 0x1620f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1620f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1620fc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1620fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162100: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x162100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_162104:
    // 0x162104: 0x8e8219c4  lw          $v0, 0x19C4($s4)
    ctx->pc = 0x162104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
label_162108:
    // 0x162108: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x162108u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x16210c: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x16210cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x162110: 0x1440fe2b  bnez        $v0, . + 4 + (-0x1D5 << 2)
    ctx->pc = 0x162110u;
    {
        const bool branch_taken_0x162110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162110u;
        // 0x162114: 0x254a0040  addiu       $t2, $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162110) {
            ctx->pc = 0x1619C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1619c0;
        }
    }
    ctx->pc = 0x162118u;
label_162118:
    // 0x162118: 0x8e9001b8  lw          $s0, 0x1B8($s4)
    ctx->pc = 0x162118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_16211c:
    // 0x16211c: 0x8e9119c0  lw          $s1, 0x19C0($s4)
    ctx->pc = 0x16211cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6592)));
    // 0x162120: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x162120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x162124: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x162124u;
    SET_GPR_U32(ctx, 31, 0x16212Cu);
    ctx->pc = 0x162128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162124u;
    // 0x162128: 0x118980  sll         $s1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x162124u, 0x16212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16212Cu;
label_16212c:
    // 0x16212c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16212Cu;
    SET_GPR_U32(ctx, 31, 0x162134u);
    ctx->pc = 0x162130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16212Cu;
    // 0x162130: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16212Cu, 0x162134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162134u;
label_162134:
    // 0x162134: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x162134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x162138: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x162138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16213c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16213cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162140: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x162144: 0x8e8c19d0  lw          $t4, 0x19D0($s4)
    ctx->pc = 0x162144u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6608)));
    // 0x162148: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x162148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16214c: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x16214cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x162150: 0x8e8819c4  lw          $t0, 0x19C4($s4)
    ctx->pc = 0x162150u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
    // 0x162154: 0x8c6b0020  lw          $t3, 0x20($v1)
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x162158: 0x8c6a0028  lw          $t2, 0x28($v1)
    ctx->pc = 0x162158u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x16215c: 0x0  nop
    ctx->pc = 0x16215cu;
    // NOP
label_162160:
    // 0x162160: 0x1892021  addu        $a0, $t4, $t1
    ctx->pc = 0x162160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x162164: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x162164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162168: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16216c: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x16216cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x162170: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x162174: 0xa8382a  slt         $a3, $a1, $t0
    ctx->pc = 0x162174u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x162178: 0x88302a  slt         $a2, $a0, $t0
    ctx->pc = 0x162178u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x16217c: 0x67280a  movz        $a1, $v1, $a3
    ctx->pc = 0x16217cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x162180: 0x46200a  movz        $a0, $v0, $a2
    ctx->pc = 0x162180u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x162184: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x162184u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x162188: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x162188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16218c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x16218cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x162190: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x162190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x162194: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x162194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x162198: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x162198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x16219c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x16219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1621a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1621a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621a4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1621a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1621a8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1621a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1621ac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1621acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1621b0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1621b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1621b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1621b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1621b8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1621b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1621bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1621bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1621c0: 0x46010044  c1          0x10044
    ctx->pc = 0x1621c0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1621c4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1621c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1621c8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1621c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1621cc: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1621ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1621d0: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1621d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1621d4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1621d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1621d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1621dc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1621dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1621e0: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x1621e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1621e4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x1621e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x1621e8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1621e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1621ec: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1621ECu;
    {
        const bool branch_taken_0x1621ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1621F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621ECu;
        // 0x1621f0: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621ec) {
            ctx->pc = 0x162160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162160;
        }
    }
    ctx->pc = 0x1621F4u;
    // 0x1621f4: 0x0  nop
    ctx->pc = 0x1621f4u;
    // NOP
    // 0x1621f8: 0x0  nop
    ctx->pc = 0x1621f8u;
    // NOP
    // 0x1621fc: 0x46042803  div.s       $f0, $f5, $f4
    ctx->pc = 0x1621fcu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x162200: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x162200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162204: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x162204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x162208: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x162208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16220c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x16220cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x162210: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x162210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162214: 0xe6801ac8  swc1        $f0, 0x1AC8($s4)
    ctx->pc = 0x162214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6856), bits); }
    // 0x162218: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x162218u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16221c: 0x3e00008  jr          $ra
    ctx->pc = 0x16221Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16221Cu;
        // 0x162220: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16221Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162224u;
}
