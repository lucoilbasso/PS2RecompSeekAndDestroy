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

// Function: WTxPanelPrintf__FP9WcTxPanelPce
// Address: 0x18dd90 - 0x18de40
void WTxPanelPrintf__FP9WcTxPanelPce_0x18dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelPrintf__FP9WcTxPanelPce_0x18dd90");
#endif

    switch (ctx->pc) {
        case 0x18ddf4u: goto label_18ddf4;
        case 0x18de28u: goto label_18de28;
        default: break;
    }

    ctx->pc = 0x18dd90u;

    // 0x18dd90: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x18dd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x18dd94: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x18dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x18dd98: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x18dd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x18dd9c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x18dd9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18dda0: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x18dda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x18dda4: 0xffa60150  sd          $a2, 0x150($sp)
    ctx->pc = 0x18dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 6));
    // 0x18dda8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18dda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ddacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddb4: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x18ddb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x18ddb8: 0xffa70158  sd          $a3, 0x158($sp)
    ctx->pc = 0x18ddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 7));
    // 0x18ddbc: 0xffa80160  sd          $t0, 0x160($sp)
    ctx->pc = 0x18ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 8));
    // 0x18ddc0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x18ddc4: 0xffa90168  sd          $t1, 0x168($sp)
    ctx->pc = 0x18ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 9));
    // 0x18ddc8: 0xffaa0170  sd          $t2, 0x170($sp)
    ctx->pc = 0x18ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 10));
    // 0x18ddcc: 0xffab0178  sd          $t3, 0x178($sp)
    ctx->pc = 0x18ddccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 11));
    // 0x18ddd0: 0xe7ac0130  swc1        $f12, 0x130($sp)
    ctx->pc = 0x18ddd0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x18ddd4: 0xe7ad0134  swc1        $f13, 0x134($sp)
    ctx->pc = 0x18ddd4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x18ddd8: 0xe7ae0138  swc1        $f14, 0x138($sp)
    ctx->pc = 0x18ddd8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x18dddc: 0xe7af013c  swc1        $f15, 0x13C($sp)
    ctx->pc = 0x18dddcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x18dde0: 0xe7b00140  swc1        $f16, 0x140($sp)
    ctx->pc = 0x18dde0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x18dde4: 0xe7b10144  swc1        $f17, 0x144($sp)
    ctx->pc = 0x18dde4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x18dde8: 0xe7b20148  swc1        $f18, 0x148($sp)
    ctx->pc = 0x18dde8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x18ddec: 0xc066c26  jal         func_19B098
    ctx->pc = 0x18DDECu;
    SET_GPR_U32(ctx, 31, 0x18DDF4u);
    ctx->pc = 0x18DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDECu;
    // 0x18ddf0: 0xe7b3014c  swc1        $f19, 0x14C($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B098u, 0x18DDECu, 0x18DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDF4u;
label_18ddf4:
    // 0x18ddf4: 0x86060246  lh          $a2, 0x246($s0)
    ctx->pc = 0x18ddf4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
    // 0x18ddf8: 0x26080260  addiu       $t0, $s0, 0x260
    ctx->pc = 0x18ddf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x18ddfc: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x18ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18de00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18de00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de04: 0x86070244  lh          $a3, 0x244($s0)
    ctx->pc = 0x18de04u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x18de08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18de08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de0c: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x18de0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x18de10: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x18de10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x18de14: 0xae08025c  sw          $t0, 0x25C($s0)
    ctx->pc = 0x18de14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 8));
    // 0x18de18: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x18de18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x18de1c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x18de1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x18de20: 0xc06343e  jal         func_18D0F8
    ctx->pc = 0x18DE20u;
    SET_GPR_U32(ctx, 31, 0x18DE28u);
    ctx->pc = 0x18DE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE20u;
    // 0x18de24: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D0F8u, 0x18DE20u, 0x18DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE28u;
label_18de28:
    // 0x18de28: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x18de28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x18de2c: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x18de2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x18de30: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x18de30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x18de34: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x18de34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x18de38: 0x3e00008  jr          $ra
    ctx->pc = 0x18DE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE38u;
        // 0x18de3c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DE40u;
}
