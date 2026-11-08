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

// Function: X_Rand_FVector__FP9FVector32fff
// Address: 0x19c338 - 0x19c688
void X_Rand_FVector__FP9FVector32fff_0x19c338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("X_Rand_FVector__FP9FVector32fff_0x19c338");
#endif

    switch (ctx->pc) {
        case 0x19c370u: goto label_19c370;
        case 0x19c470u: goto label_19c470;
        case 0x19c580u: goto label_19c580;
        default: break;
    }

    ctx->pc = 0x19c338u;

    // 0x19c338: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c33c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c33cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c340: 0x2443f0f0  addiu       $v1, $v0, -0xF10
    ctx->pc = 0x19c340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c344: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x19c344u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19c348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c34c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x19c34cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c350: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x19c350u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19c354: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x19c354u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c358: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19C358u;
    {
        const bool branch_taken_0x19c358 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C358u;
        // 0x19c35c: 0xe7ae0008  swc1        $f14, 0x8($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c358) {
            ctx->pc = 0x19C3A0u;
            goto label_19c3a0;
        }
    }
    ctx->pc = 0x19C360u;
    // 0x19c360: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c364: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x19c364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19c368: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c370:
    // 0x19c370: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19c370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19c374: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19c374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19c378: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19c378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19c37c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19c380: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19c380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c384: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19c384u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c388: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19C388u;
    {
        const bool branch_taken_0x19c388 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C388u;
        // 0x19c38c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c388) {
            ctx->pc = 0x19C370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c370;
        }
    }
    ctx->pc = 0x19C390u;
    // 0x19c390: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c394: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c398: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19c39c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c39cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
label_19c3a0:
    // 0x19c3a0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c3a4: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19c3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c3a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F4u));
    // 0x19c3ac: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C3ACu;
    {
        const bool branch_taken_0x19c3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c3ac) {
            ctx->pc = 0x19C3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C3ACu;
            // 0x19c3b0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C3C8u;
            goto label_19c3c8;
        }
    }
    ctx->pc = 0x19C3B4u;
    // 0x19c3b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c3b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c3bc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c3c0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19C3C0u;
    {
        const bool branch_taken_0x19c3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3C0u;
        // 0x19c3c4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3c0) {
            ctx->pc = 0x19C440u;
            goto label_19c440;
        }
    }
    ctx->pc = 0x19C3C8u;
label_19c3c8:
    // 0x19c3c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c3cc: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19c3ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19c3d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C3D0u;
    {
        const bool branch_taken_0x19c3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3D0u;
        // 0x19c3d4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3d0) {
            ctx->pc = 0x19C3F0u;
            goto label_19c3f0;
        }
    }
    ctx->pc = 0x19C3D8u;
    // 0x19c3d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c3dc: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c3e0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c3e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c3e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C3E8u;
    {
        const bool branch_taken_0x19c3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3E8u;
        // 0x19c3ec: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3e8) {
            ctx->pc = 0x19C404u;
            goto label_19c404;
        }
    }
    ctx->pc = 0x19C3F0u;
label_19c3f0:
    // 0x19c3f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c3f4: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c3f8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c3fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c400: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_19c404:
    // 0x19c404: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c408: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19c408u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c40c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19c410: 0x2465f0f0  addiu       $a1, $v1, -0xF10
    ctx->pc = 0x19c410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19c414: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c414u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c41c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c420: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19c420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19c424: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c42c: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19c42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c430: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C430u;
    {
        const bool branch_taken_0x19c430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C430u;
        // 0x19c434: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c430) {
            ctx->pc = 0x19C43Cu;
            goto label_19c43c;
        }
    }
    ctx->pc = 0x19C438u;
    // 0x19c438: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19c438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19c43c:
    // 0x19c43c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19c440:
    // 0x19c440: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c444: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x19c444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c448: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x19c448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c44c: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x19c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x19c450: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19c450u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c454: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19C454u;
    {
        const bool branch_taken_0x19c454 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C454u;
        // 0x19c458: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c454) {
            ctx->pc = 0x19C4A0u;
            goto label_19c4a0;
        }
    }
    ctx->pc = 0x19C45Cu;
    // 0x19c45c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c460: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x19c460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19c464: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c46c: 0x0  nop
    ctx->pc = 0x19c46cu;
    // NOP
label_19c470:
    // 0x19c470: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19c470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19c474: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19c474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19c478: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19c478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19c47c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19c480: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19c480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c484: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19c484u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c488: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19C488u;
    {
        const bool branch_taken_0x19c488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C488u;
        // 0x19c48c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c488) {
            ctx->pc = 0x19C470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c470;
        }
    }
    ctx->pc = 0x19C490u;
    // 0x19c490: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c494: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c498: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c498u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19c49c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c49cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
label_19c4a0:
    // 0x19c4a0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c4a4: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c4a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F4u));
    // 0x19c4ac: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C4ACu;
    {
        const bool branch_taken_0x19c4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4ac) {
            ctx->pc = 0x19C4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C4ACu;
            // 0x19c4b0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C4C8u;
            goto label_19c4c8;
        }
    }
    ctx->pc = 0x19C4B4u;
    // 0x19c4b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c4b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c4bc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c4c0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19C4C0u;
    {
        const bool branch_taken_0x19c4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4C0u;
        // 0x19c4c4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4c0) {
            ctx->pc = 0x19C540u;
            goto label_19c540;
        }
    }
    ctx->pc = 0x19C4C8u;
label_19c4c8:
    // 0x19c4c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c4cc: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19c4ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19c4d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C4D0u;
    {
        const bool branch_taken_0x19c4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D0u;
        // 0x19c4d4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4d0) {
            ctx->pc = 0x19C4F0u;
            goto label_19c4f0;
        }
    }
    ctx->pc = 0x19C4D8u;
    // 0x19c4d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c4dc: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c4e0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c4e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c4e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C4E8u;
    {
        const bool branch_taken_0x19c4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4E8u;
        // 0x19c4ec: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4e8) {
            ctx->pc = 0x19C504u;
            goto label_19c504;
        }
    }
    ctx->pc = 0x19C4F0u;
label_19c4f0:
    // 0x19c4f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c4f4: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c4f8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c4fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c500: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19c500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_19c504:
    // 0x19c504: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c508: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19c508u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c50c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19c510: 0x2465f0f0  addiu       $a1, $v1, -0xF10
    ctx->pc = 0x19c510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19c514: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c514u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c518: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c51c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c520: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19c520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19c524: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c528: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c52c: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19c52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c530: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C530u;
    {
        const bool branch_taken_0x19c530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C530u;
        // 0x19c534: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c530) {
            ctx->pc = 0x19C53Cu;
            goto label_19c53c;
        }
    }
    ctx->pc = 0x19C538u;
    // 0x19c538: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19c538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19c53c:
    // 0x19c53c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19c540:
    // 0x19c540: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x19c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c544: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19c548: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x19c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19c54c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x19c54cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19c550: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x19C550u;
    {
        const bool branch_taken_0x19c550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C550u;
        // 0x19c554: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c550) {
            ctx->pc = 0x19C65Cu;
            goto label_19c65c;
        }
    }
    ctx->pc = 0x19C558u;
    // 0x19c558: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c55c: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x19c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c560: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19c560u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c564: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19C564u;
    {
        const bool branch_taken_0x19c564 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C564u;
        // 0x19c568: 0x2445f0f0  addiu       $a1, $v0, -0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c564) {
            ctx->pc = 0x19C5B8u;
            goto label_19c5b8;
        }
    }
    ctx->pc = 0x19C56Cu;
    // 0x19c56c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c570: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x19c570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19c574: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c57c: 0x0  nop
    ctx->pc = 0x19c57cu;
    // NOP
label_19c580:
    // 0x19c580: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19c580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19c584: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19c584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19c588: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19c588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19c58c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19c590: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19c590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c594: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19c594u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c598: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19C598u;
    {
        const bool branch_taken_0x19c598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C598u;
        // 0x19c59c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c598) {
            ctx->pc = 0x19C580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c580;
        }
    }
    ctx->pc = 0x19C5A0u;
    // 0x19c5a0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c5a4: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c5a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c5a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19c5ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c5acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
    // 0x19c5b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c5b4: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19c5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
label_19c5b8:
    // 0x19c5b8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19c5bc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C5BCu;
    {
        const bool branch_taken_0x19c5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c5bc) {
            ctx->pc = 0x19C5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C5BCu;
            // 0x19c5c0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C5D8u;
            goto label_19c5d8;
        }
    }
    ctx->pc = 0x19C5C4u;
    // 0x19c5c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c5c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c5cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c5d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19C5D0u;
    {
        const bool branch_taken_0x19c5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5D0u;
        // 0x19c5d4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5d0) {
            ctx->pc = 0x19C650u;
            goto label_19c650;
        }
    }
    ctx->pc = 0x19C5D8u;
label_19c5d8:
    // 0x19c5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c5dc: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19c5dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19c5e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C5E0u;
    {
        const bool branch_taken_0x19c5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5E0u;
        // 0x19c5e4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5e0) {
            ctx->pc = 0x19C600u;
            goto label_19c600;
        }
    }
    ctx->pc = 0x19C5E8u;
    // 0x19c5e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c5ec: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c5f0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c5f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C5F8u;
    {
        const bool branch_taken_0x19c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5F8u;
        // 0x19c5fc: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5f8) {
            ctx->pc = 0x19C614u;
            goto label_19c614;
        }
    }
    ctx->pc = 0x19C600u;
label_19c600:
    // 0x19c600: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c604: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c608: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c60c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c610: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19c610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_19c614:
    // 0x19c614: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c618: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19c618u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c61c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19c620: 0x2465f0f0  addiu       $a1, $v1, -0xF10
    ctx->pc = 0x19c620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19c624: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c628: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c62c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c630: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19c630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19c634: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c638: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c63c: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19c63cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c640: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C640u;
    {
        const bool branch_taken_0x19c640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C640u;
        // 0x19c644: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c640) {
            ctx->pc = 0x19C64Cu;
            goto label_19c64c;
        }
    }
    ctx->pc = 0x19C648u;
    // 0x19c648: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19c648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19c64c:
    // 0x19c64c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19c650:
    // 0x19c650: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x19c650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c654: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x19c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19c658: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19c658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_19c65c:
    // 0x19c65c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19c65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19c660: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19c664: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x19c664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x19c668: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19c668u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c66c: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x19c66cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x19c670: 0x4be1093f  vitof15.xyzw $vf1, $vf1
    ctx->pc = 0x19c670u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19c674: 0x4bc2086a  vmul.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19c674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19c678: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x19c678u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19c67c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x19c67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c680: 0x3e00008  jr          $ra
    ctx->pc = 0x19C680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C680u;
        // 0x19c684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C688u;
}
