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

// Function: MotionWorkCreate__11BMotionCtrlP5BcObjPFP11BMotionCtrlP11BMotionWorki_fi
// Address: 0x1a2198 - 0x1a23d0
void MotionWorkCreate__11BMotionCtrlP5BcObjPFP11BMotionCtrlP11BMotionWorki_fi_0x1a2198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionWorkCreate__11BMotionCtrlP5BcObjPFP11BMotionCtrlP11BMotionWorki_fi_0x1a2198");
#endif

    switch (ctx->pc) {
        case 0x1a21f0u: goto label_1a21f0;
        case 0x1a226cu: goto label_1a226c;
        case 0x1a22a8u: goto label_1a22a8;
        case 0x1a2330u: goto label_1a2330;
        case 0x1a2338u: goto label_1a2338;
        case 0x1a234cu: goto label_1a234c;
        case 0x1a2354u: goto label_1a2354;
        case 0x1a2378u: goto label_1a2378;
        case 0x1a2384u: goto label_1a2384;
        default: break;
    }

    ctx->pc = 0x1a2198u;

    // 0x1a2198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a219c: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1a219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1a21a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a21a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a21a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a21a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a21a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a21ac: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a21acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a21b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a21b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a21b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a21b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a21bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a21bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a21c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a21c4: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1a21c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a21c8: 0xaf809074  sw          $zero, -0x6F8C($gp)
    ctx->pc = 0x1a21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 0));
    // 0x1a21cc: 0xaf829078  sw          $v0, -0x6F88($gp)
    ctx->pc = 0x1a21ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938744), GPR_U32(ctx, 2));
    // 0x1a21d0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1A21D0u;
    {
        const bool branch_taken_0x1a21d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21D0u;
        // 0x1a21d4: 0xae31007c  sw          $s1, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a21d0) {
            ctx->pc = 0x1A22F8u;
            goto label_1a22f8;
        }
    }
    ctx->pc = 0x1A21D8u;
    // 0x1a21d8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1a21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a21dc: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1A21DCu;
    {
        const bool branch_taken_0x1a21dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a21dc) {
            ctx->pc = 0x1A22FCu;
            goto label_1a22fc;
        }
    }
    ctx->pc = 0x1A21E4u;
    // 0x1a21e4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a21e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a21e8: 0xc0695f4  jal         func_1A57D0
    ctx->pc = 0x1A21E8u;
    SET_GPR_U32(ctx, 31, 0x1A21F0u);
    ctx->pc = 0x1A21ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A21E8u;
    // 0x1a21ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A57D0u, 0x1A21E8u, 0x1A21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A21F0u;
label_1a21f0:
    // 0x1a21f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a21f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21f4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1a21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1a21f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a21f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21fc: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1a21fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2204: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x1a2204u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2208: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x1a2208u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a220c: 0xa440000a  sh          $zero, 0xA($v0)
    ctx->pc = 0x1a220cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2210: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x1a2210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x1a2214: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1a2214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a2218: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1a2218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1a221c: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x1a221cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a2220: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1a2220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a2224: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1a2224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1a2228: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1a2228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a222c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1a222cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1a2230: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x1a2230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x1a2234: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x1a2234u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a2238: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x1a2238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x1a223c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1a223cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1a2240: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1a2240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1a2244: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x1a2244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1a2248: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1a2248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1a224c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1a224cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1a2250: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1a2250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1a2254: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x1a2254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x1a2258: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a2258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a225c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a225cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a2260: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1a2260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a2264: 0xc0686dc  jal         func_1A1B70
    ctx->pc = 0x1A2264u;
    SET_GPR_U32(ctx, 31, 0x1A226Cu);
    ctx->pc = 0x1A2268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2264u;
    // 0x1a2268: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1B70u, 0x1A2264u, 0x1A226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A226Cu;
label_1a226c:
    // 0x1a226c: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x1a226cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x1a2270: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a2270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1a2274: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a2274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2278: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x1a2278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a227c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a227cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2280: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a2280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2284: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1a2284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a2288: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x1a2288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1a228c: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x1a228cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x1a2290: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A2290u;
    {
        const bool branch_taken_0x1a2290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2290u;
        // 0x1a2294: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2290) {
            ctx->pc = 0x1A22CCu;
            goto label_1a22cc;
        }
    }
    ctx->pc = 0x1A2298u;
    // 0x1a2298: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1a2298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a229c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1A229Cu;
    {
        const bool branch_taken_0x1a229c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a229c) {
            ctx->pc = 0x1A22A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A229Cu;
            // 0x1a22a0: 0x94c30002  lhu         $v1, 0x2($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A22D0u;
            goto label_1a22d0;
        }
    }
    ctx->pc = 0x1A22A4u;
    // 0x1a22a4: 0x8cc60028  lw          $a2, 0x28($a2)
    ctx->pc = 0x1a22a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_1a22a8:
    // 0x1a22a8: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x1a22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x1a22ac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A22ACu;
    {
        const bool branch_taken_0x1a22ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a22ac) {
            ctx->pc = 0x1A22B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A22ACu;
            // 0x1a22b0: 0x94c30002  lhu         $v1, 0x2($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A22D0u;
            goto label_1a22d0;
        }
    }
    ctx->pc = 0x1A22B4u;
    // 0x1a22b4: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1a22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a22b8: 0x0  nop
    ctx->pc = 0x1a22b8u;
    // NOP
    // 0x1a22bc: 0x0  nop
    ctx->pc = 0x1a22bcu;
    // NOP
    // 0x1a22c0: 0x0  nop
    ctx->pc = 0x1a22c0u;
    // NOP
    // 0x1a22c4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A22C4u;
    {
        const bool branch_taken_0x1a22c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a22c4) {
            ctx->pc = 0x1A22C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A22C4u;
            // 0x1a22c8: 0x8cc60028  lw          $a2, 0x28($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A22A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a22a8;
        }
    }
    ctx->pc = 0x1A22CCu;
label_1a22cc:
    // 0x1a22cc: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x1a22ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_1a22d0:
    // 0x1a22d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a22d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a22d4: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x1a22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x1a22d8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1a22d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22dc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1a22dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1a22e0: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x1a22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x1a22e4: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1a22e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a22e8: 0xacd00028  sw          $s0, 0x28($a2)
    ctx->pc = 0x1a22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 16));
    // 0x1a22ec: 0xaf859070  sw          $a1, -0x6F90($gp)
    ctx->pc = 0x1a22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 5));
    // 0x1a22f0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1A22F0u;
    {
        const bool branch_taken_0x1a22f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22F0u;
        // 0x1a22f4: 0xae30007c  sw          $s0, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a22f0) {
            ctx->pc = 0x1A23B0u;
            goto label_1a23b0;
        }
    }
    ctx->pc = 0x1A22F8u;
label_1a22f8:
    // 0x1a22f8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1a22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a22fc:
    // 0x1a22fc: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A22FCu;
    {
        const bool branch_taken_0x1a22fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1a22fc) {
            ctx->pc = 0x1A2300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A22FCu;
            // 0x1a2300: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2320u;
            goto label_1a2320;
        }
    }
    ctx->pc = 0x1A2304u;
    // 0x1a2304: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1a2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a2308: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2308u;
    {
        const bool branch_taken_0x1a2308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2308) {
            ctx->pc = 0x1A230Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2308u;
            // 0x1a230c: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2320u;
            goto label_1a2320;
        }
    }
    ctx->pc = 0x1A2310u;
    // 0x1a2310: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x1a2310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a2314: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A2314u;
    {
        const bool branch_taken_0x1a2314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2314u;
        // 0x1a2318: 0xaf809070  sw          $zero, -0x6F90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2314) {
            ctx->pc = 0x1A23ACu;
            goto label_1a23ac;
        }
    }
    ctx->pc = 0x1A231Cu;
    // 0x1a231c: 0x0  nop
    ctx->pc = 0x1a231cu;
    // NOP
label_1a2320:
    // 0x1a2320: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2320u;
    {
        const bool branch_taken_0x1a2320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2320) {
            ctx->pc = 0x1A2324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2320u;
            // 0x1a2324: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A233Cu;
            goto label_1a233c;
        }
    }
    ctx->pc = 0x1A2328u;
    // 0x1a2328: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A2328u;
    SET_GPR_U32(ctx, 31, 0x1A2330u);
    ctx->pc = 0x1A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43A0u, 0x1A2328u, 0x1A2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2330u;
label_1a2330:
    // 0x1a2330: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A2330u;
    SET_GPR_U32(ctx, 31, 0x1A2338u);
    ctx->pc = 0x1A2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2330u;
    // 0x1a2334: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A2330u, 0x1A2338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2338u;
label_1a2338:
    // 0x1a2338: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1a2338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1a233c:
    // 0x1a233c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A233Cu;
    {
        const bool branch_taken_0x1a233c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a233c) {
            ctx->pc = 0x1A2340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A233Cu;
            // 0x1a2340: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2358u;
            goto label_1a2358;
        }
    }
    ctx->pc = 0x1A2344u;
    // 0x1a2344: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A2344u;
    SET_GPR_U32(ctx, 31, 0x1A234Cu);
    ctx->pc = 0x1A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43A0u, 0x1A2344u, 0x1A234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A234Cu;
label_1a234c:
    // 0x1a234c: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A234Cu;
    SET_GPR_U32(ctx, 31, 0x1A2354u);
    ctx->pc = 0x1A2350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A234Cu;
    // 0x1a2350: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A234Cu, 0x1A2354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2354u;
label_1a2354:
    // 0x1a2354: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1a2354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1a2358:
    // 0x1a2358: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2358u;
    {
        const bool branch_taken_0x1a2358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2358u;
        // 0x1a235c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2358) {
            ctx->pc = 0x1A237Cu;
            goto label_1a237c;
        }
    }
    ctx->pc = 0x1A2360u;
    // 0x1a2360: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1a2360u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a2364: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a2364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a2368: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2368u;
    {
        const bool branch_taken_0x1a2368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2368) {
            ctx->pc = 0x1A237Cu;
            goto label_1a237c;
        }
    }
    ctx->pc = 0x1A2370u;
    // 0x1a2370: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A2370u;
    SET_GPR_U32(ctx, 31, 0x1A2378u);
    ctx->pc = 0x1A2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2370u;
    // 0x1a2374: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A2370u, 0x1A2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2378u;
label_1a2378:
    // 0x1a2378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a237c:
    // 0x1a237c: 0xc0686dc  jal         func_1A1B70
    ctx->pc = 0x1A237Cu;
    SET_GPR_U32(ctx, 31, 0x1A2384u);
    ctx->pc = 0x1A2380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A237Cu;
    // 0x1a2380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1B70u, 0x1A237Cu, 0x1A2384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2384u;
label_1a2384:
    // 0x1a2384: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x1a2384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
    // 0x1a2388: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a2388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a238c: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x1a238cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a2390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2394: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1a2394u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2398: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1a2398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1a239c: 0xae27001c  sw          $a3, 0x1C($s1)
    ctx->pc = 0x1a239cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 7));
    // 0x1a23a0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1a23a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1a23a4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1a23a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1a23a8: 0xaf839070  sw          $v1, -0x6F90($gp)
    ctx->pc = 0x1a23a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 3));
label_1a23ac:
    // 0x1a23ac: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1a23acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a23b0:
    // 0x1a23b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a23b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a23b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a23b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a23b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a23b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a23bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a23bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a23c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a23c4: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x1a23c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a23c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A23C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23C8u;
        // 0x1a23cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A23C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A23D0u;
}
