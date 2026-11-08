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

// Function: entry_001d9740
// Address: 0x1d9740 - 0x1d9810
void entry_001d9740_0x1d9740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9740_0x1d9740");
#endif

    ctx->pc = 0x1d9740u;

label_1d9740:
    // 0x1d9740: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d9740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9744: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d9744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d9748: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d9748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d974c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1d974cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1d9750: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d9750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d9754: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d9754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d9758: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d9758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d975c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1d975cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1d9760: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d9760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d9764: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x1d9764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x1d9768: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d9768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d976c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1d976cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1d9770: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1d9770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1d9774: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x1d9774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x1d9778: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1d9778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1d977c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1d977cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1d9780: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1d9780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1d9784: 0x461ffee  bgez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D9784u;
    {
        const bool branch_taken_0x1d9784 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9784u;
        // 0x1d9788: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9784) {
            ctx->pc = 0x1D9740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9740;
        }
    }
    ctx->pc = 0x1D978Cu;
    // 0x1d978c: 0xacc007f0  sw          $zero, 0x7F0($a2)
    ctx->pc = 0x1d978cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2032), GPR_U32(ctx, 0));
    // 0x1d9790: 0x24c30820  addiu       $v1, $a2, 0x820
    ctx->pc = 0x1d9790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
    // 0x1d9794: 0xacc00810  sw          $zero, 0x810($a2)
    ctx->pc = 0x1d9794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2064), GPR_U32(ctx, 0));
    // 0x1d9798: 0xacc00814  sw          $zero, 0x814($a2)
    ctx->pc = 0x1d9798u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2068), GPR_U32(ctx, 0));
    // 0x1d979c: 0xacc00818  sw          $zero, 0x818($a2)
    ctx->pc = 0x1d979cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2072), GPR_U32(ctx, 0));
    // 0x1d97a0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1d97a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1d97a4: 0x24c20830  addiu       $v0, $a2, 0x830
    ctx->pc = 0x1d97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2096));
    // 0x1d97a8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1d97a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1d97ac: 0xacc00840  sw          $zero, 0x840($a2)
    ctx->pc = 0x1d97acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2112), GPR_U32(ctx, 0));
    // 0x1d97b0: 0x24c50260  addiu       $a1, $a2, 0x260
    ctx->pc = 0x1d97b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 608));
    // 0x1d97b4: 0xacc00844  sw          $zero, 0x844($a2)
    ctx->pc = 0x1d97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2116), GPR_U32(ctx, 0));
    // 0x1d97b8: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x1d97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x1d97bc: 0xacc00848  sw          $zero, 0x848($a2)
    ctx->pc = 0x1d97bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2120), GPR_U32(ctx, 0));
    // 0x1d97c0: 0x346377ff  ori         $v1, $v1, 0x77FF
    ctx->pc = 0x1d97c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30719);
    // 0x1d97c4: 0xacc0084c  sw          $zero, 0x84C($a2)
    ctx->pc = 0x1d97c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2124), GPR_U32(ctx, 0));
    // 0x1d97c8: 0x24c403b0  addiu       $a0, $a2, 0x3B0
    ctx->pc = 0x1d97c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 944));
    // 0x1d97cc: 0xacc00850  sw          $zero, 0x850($a2)
    ctx->pc = 0x1d97ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2128), GPR_U32(ctx, 0));
    // 0x1d97d0: 0xacc00854  sw          $zero, 0x854($a2)
    ctx->pc = 0x1d97d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
    // 0x1d97d4: 0xacc00858  sw          $zero, 0x858($a2)
    ctx->pc = 0x1d97d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2136), GPR_U32(ctx, 0));
    // 0x1d97d8: 0xacc0089c  sw          $zero, 0x89C($a2)
    ctx->pc = 0x1d97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2204), GPR_U32(ctx, 0));
    // 0x1d97dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d97dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d97e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d97e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d97e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1d97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d97e8: 0xacc0085c  sw          $zero, 0x85C($a2)
    ctx->pc = 0x1d97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2140), GPR_U32(ctx, 0));
    // 0x1d97ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d97ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d97f0: 0xacc00860  sw          $zero, 0x860($a2)
    ctx->pc = 0x1d97f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2144), GPR_U32(ctx, 0));
    // 0x1d97f4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1d97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1d97f8: 0xacc00864  sw          $zero, 0x864($a2)
    ctx->pc = 0x1d97f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2148), GPR_U32(ctx, 0));
    // 0x1d97fc: 0xac8002d0  sw          $zero, 0x2D0($a0)
    ctx->pc = 0x1d97fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 0));
    // 0x1d9800: 0xe48002d4  swc1        $f0, 0x2D4($a0)
    ctx->pc = 0x1d9800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 724), bits); }
    // 0x1d9804: 0xacc00894  sw          $zero, 0x894($a2)
    ctx->pc = 0x1d9804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2196), GPR_U32(ctx, 0));
    // 0x1d9808: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9808u;
        // 0x1d980c: 0xacc00898  sw          $zero, 0x898($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9810u;
}
