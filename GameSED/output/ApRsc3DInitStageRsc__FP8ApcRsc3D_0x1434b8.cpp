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

// Function: ApRsc3DInitStageRsc__FP8ApcRsc3D
// Address: 0x1434b8 - 0x14355c
void ApRsc3DInitStageRsc__FP8ApcRsc3D_0x1434b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DInitStageRsc__FP8ApcRsc3D_0x1434b8");
#endif

    switch (ctx->pc) {
        case 0x1434c0u: goto label_1434c0;
        case 0x143518u: goto label_143518;
        default: break;
    }

    ctx->pc = 0x1434b8u;

    // 0x1434b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1434b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1434bc: 0x24820054  addiu       $v0, $a0, 0x54
    ctx->pc = 0x1434bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
label_1434c0:
    // 0x1434c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1434c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1434c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1434c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1434c8: 0x0  nop
    ctx->pc = 0x1434c8u;
    // NOP
    // 0x1434cc: 0x0  nop
    ctx->pc = 0x1434ccu;
    // NOP
    // 0x1434d0: 0x0  nop
    ctx->pc = 0x1434d0u;
    // NOP
    // 0x1434d4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1434D4u;
    {
        const bool branch_taken_0x1434d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1434D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434D4u;
        // 0x1434d8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1434d4) {
            ctx->pc = 0x1434C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1434c0;
        }
    }
    ctx->pc = 0x1434DCu;
    // 0x1434dc: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1434dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1434e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1434e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1434e4: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x1434e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x1434e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1434e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1434ec: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x1434ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1434f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1434f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1434f4: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1434f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1434f8: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x1434f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x1434fc: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x1434fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x143500: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x143500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x143504: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x143504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x143508: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x143508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x14350c: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x14350cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x143510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143514: 0x0  nop
    ctx->pc = 0x143514u;
    // NOP
label_143518:
    // 0x143518: 0xaca60080  sw          $a2, 0x80($a1)
    ctx->pc = 0x143518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 6));
    // 0x14351c: 0x24a200b0  addiu       $v0, $a1, 0xB0
    ctx->pc = 0x14351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x143520: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x143520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
    // 0x143524: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x143524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x143528: 0xaca700a0  sw          $a3, 0xA0($a1)
    ctx->pc = 0x143528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 7));
    // 0x14352c: 0xa4a000a4  sh          $zero, 0xA4($a1)
    ctx->pc = 0x14352cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 164), (uint16_t)GPR_U32(ctx, 0));
    // 0x143530: 0xa4a000a6  sh          $zero, 0xA6($a1)
    ctx->pc = 0x143530u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 166), (uint16_t)GPR_U32(ctx, 0));
    // 0x143534: 0xe4a000a8  swc1        $f0, 0xA8($a1)
    ctx->pc = 0x143534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
    // 0x143538: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x143538u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14353c: 0x24a300c0  addiu       $v1, $a1, 0xC0
    ctx->pc = 0x14353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x143540: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x143540u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x143544: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x143544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x143548: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x143548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14354c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14354Cu;
    {
        const bool branch_taken_0x14354c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14354Cu;
        // 0x143550: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14354c) {
            ctx->pc = 0x143518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143518;
        }
    }
    ctx->pc = 0x143554u;
    // 0x143554: 0x3e00008  jr          $ra
    ctx->pc = 0x143554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14355Cu;
}
