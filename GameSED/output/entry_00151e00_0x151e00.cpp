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

// Function: entry_00151e00
// Address: 0x151e00 - 0x151e98
void entry_00151e00_0x151e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151e00_0x151e00");
#endif

    switch (ctx->pc) {
        case 0x151e08u: goto label_151e08;
        case 0x151e8cu: goto label_151e8c;
        default: break;
    }

    ctx->pc = 0x151e00u;

    // 0x151e00: 0xc061422  jal         func_185088
    ctx->pc = 0x151E00u;
    SET_GPR_U32(ctx, 31, 0x151E08u);
    ctx->pc = 0x151E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E00u;
    // 0x151e04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x151E00u, 0x151E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E08u;
label_151e08:
    // 0x151e08: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x151e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x151e0c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x151e0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151e10: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x151e10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x151e14: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x151e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x151e18: 0x26430880  addiu       $v1, $s2, 0x880
    ctx->pc = 0x151e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2176));
    // 0x151e1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x151e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151e20: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x151e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x151e24: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x151e24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151e28: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x151e28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151e2c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151e2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151e30: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151e30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151e34: 0x8e4401f4  lw          $a0, 0x1F4($s2)
    ctx->pc = 0x151e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x151e38: 0x8e4701f0  lw          $a3, 0x1F0($s2)
    ctx->pc = 0x151e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x151e3c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x151e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x151e40: 0xae470894  sw          $a3, 0x894($s2)
    ctx->pc = 0x151e40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2196), GPR_U32(ctx, 7));
    // 0x151e44: 0xae430890  sw          $v1, 0x890($s2)
    ctx->pc = 0x151e44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2192), GPR_U32(ctx, 3));
    // 0x151e48: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x151e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x151e4c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x151e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x151e50: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x151E50u;
    {
        const bool branch_taken_0x151e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e50) {
            ctx->pc = 0x151E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151E50u;
            // 0x151e54: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151FACu;
            return;
        }
    }
    ctx->pc = 0x151E58u;
    // 0x151e58: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x151e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x151e5c: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x151e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x151e60: 0xac6200b4  sw          $v0, 0xB4($v1)
    ctx->pc = 0x151e60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B4u, _value); } while (0);
    // 0x151e64: 0xaf928a30  sw          $s2, -0x75D0($gp)
    ctx->pc = 0x151e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 18));
    // 0x151e68: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x151e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x151e6c: 0x4a2004f  bltzl       $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x151E6Cu;
    {
        const bool branch_taken_0x151e6c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x151e6c) {
            ctx->pc = 0x151E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151E6Cu;
            // 0x151e70: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151FACu;
            return;
        }
    }
    ctx->pc = 0x151E74u;
    // 0x151e74: 0x8ce40174  lw          $a0, 0x174($a3)
    ctx->pc = 0x151e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x151e78: 0x5080004c  beql        $a0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x151E78u;
    {
        const bool branch_taken_0x151e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e78) {
            ctx->pc = 0x151E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151E78u;
            // 0x151e7c: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151FACu;
            return;
        }
    }
    ctx->pc = 0x151E80u;
    // 0x151e80: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x151e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x151e84: 0xc041228  jal         func_1048A0
    ctx->pc = 0x151E84u;
    SET_GPR_U32(ctx, 31, 0x151E8Cu);
    ctx->pc = 0x151E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E84u;
    // 0x151e88: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x151E84u, 0x151E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E8Cu;
label_151e8c:
    // 0x151e8c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x151E8Cu;
    {
        const bool branch_taken_0x151e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E8Cu;
        // 0x151e90: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e8c) {
            ctx->pc = 0x151FACu;
            return;
        }
    }
    ctx->pc = 0x151E94u;
    // 0x151e94: 0x0  nop
    ctx->pc = 0x151e94u;
    // NOP
    ctx->pc = 0x151e98u;
}
