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

// Function: entry_001a21a8
// Address: 0x1a21a8 - 0x1a22a8
void entry_001a21a8_0x1a21a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a21a8_0x1a21a8");
#endif

    switch (ctx->pc) {
        case 0x1a21f0u: goto label_1a21f0;
        case 0x1a226cu: goto label_1a226c;
        default: break;
    }

    ctx->pc = 0x1a21a8u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1A22A4u;
    // 0x1a22a4: 0x8cc60028  lw          $a2, 0x28($a2)
    ctx->pc = 0x1a22a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    ctx->pc = 0x1a22a8u;
}
