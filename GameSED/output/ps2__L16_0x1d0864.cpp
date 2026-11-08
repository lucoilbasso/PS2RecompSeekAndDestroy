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

// Function: $L16
// Address: 0x1d0864 - 0x1d08f0
void ps2__L16_0x1d0864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L16_0x1d0864");
#endif

    ctx->pc = 0x1d0864u;

label_1d0864:
    // 0x1d0864: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x1d0864u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0868: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x1d0868u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x1d086c: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x1d086cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x1d0870: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x1d0870u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x1d0874: 0x71083389  pcpyld      $a2, $t0, $t0
    ctx->pc = 0x1d0874u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x1d0878: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x1d0878u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d087c: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x1d087cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x1d0880: 0x70461489  pand        $v0, $v0, $a2
    ctx->pc = 0x1d0880u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1d0884: 0x70471ba9  pcpyud      $v1, $v0, $a3
    ctx->pc = 0x1d0884u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x1d0888: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d0888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d088c: 0x5460003b  bnel        $v1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x1D088Cu;
    {
        const bool branch_taken_0x1d088c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d088c) {
            ctx->pc = 0x1D0890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D088Cu;
            // 0x1d0890: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D097Cu;
            return;
        }
    }
    ctx->pc = 0x1D0894u;
    // 0x1d0894: 0x712814c9  pxor        $v0, $t1, $t0
    ctx->pc = 0x1d0894u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1d0898: 0x704a1a48  psubb       $v1, $v0, $t2
    ctx->pc = 0x1d0898u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1d089c: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x1d089cu;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1d08a0: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x1d08a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x1d08a4: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x1d08a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x1d08a8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x1d08a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x1d08ac: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x1d08acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x1d08b0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x1d08b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x1d08b4: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x1d08b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x1d08b8: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x1d08b8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1d08bc: 0x70661c89  pand        $v1, $v1, $a2
    ctx->pc = 0x1d08bcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x1d08c0: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x1d08c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x1d08c4: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x1d08c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x1d08c8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1d08c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1d08cc: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x1d08ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x1d08d0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1d08d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1d08d4: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x1d08d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x1d08d8: 0x706513a9  pcpyud      $v0, $v1, $a1
    ctx->pc = 0x1d08d8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x1d08dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d08dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d08e0: 0x5060ffe0  beql        $v1, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D08E0u;
    {
        const bool branch_taken_0x1d08e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d08e0) {
            ctx->pc = 0x1D08E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D08E0u;
            // 0x1d08e4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0864;
        }
    }
    ctx->pc = 0x1D08E8u;
    // 0x1d08e8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1D08E8u;
    {
        const bool branch_taken_0x1d08e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08E8u;
        // 0x1d08ec: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08e8) {
            ctx->pc = 0x1D097Cu;
            return;
        }
    }
    ctx->pc = 0x1D08F0u;
}
