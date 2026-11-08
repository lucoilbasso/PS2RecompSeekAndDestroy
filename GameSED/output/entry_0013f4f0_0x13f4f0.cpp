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

// Function: entry_0013f4f0
// Address: 0x13f4f0 - 0x13f55c
void entry_0013f4f0_0x13f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f4f0_0x13f4f0");
#endif

    ctx->pc = 0x13f4f0u;

    // 0x13f4f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13f4f4: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x13f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x13f4f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f4fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f500: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13f500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f504: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x13f504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x13f508: 0x28644000  slti        $a0, $v1, 0x4000
    ctx->pc = 0x13f508u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x13f50c: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x13f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x13f510: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x13f510u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x13f514: 0x70031868  pabsw       $v1, $v1
    ctx->pc = 0x13f514u;
    SET_GPR_VEC(ctx, 3, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x13f518: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x13f518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x13f51c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x13f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f520: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x13f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13f524: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x13f524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13f528: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x13f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x13f52c: 0x28454000  slti        $a1, $v0, 0x4000
    ctx->pc = 0x13f52cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x13f530: 0x24448000  addiu       $a0, $v0, -0x8000
    ctx->pc = 0x13f530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x13f534: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x13f534u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x13f538: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x13f538u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x13f53c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x13f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x13f540: 0x706218c8  pmaxw       $v1, $v1, $v0
    ctx->pc = 0x13f540u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13f544: 0x34800  sll         $t1, $v1, 0
    ctx->pc = 0x13f544u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x13f548: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F548u;
    {
        const bool branch_taken_0x13f548 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f548) {
            ctx->pc = 0x13F54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F548u;
            // 0x13f54c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F55Cu;
            return;
        }
    }
    ctx->pc = 0x13F550u;
    // 0x13f550: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F550u;
    {
        const bool branch_taken_0x13f550 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F550u;
        // 0x13f554: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f550) {
            ctx->pc = 0x13F568u;
            return;
        }
    }
    ctx->pc = 0x13F558u;
    // 0x13f558: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x13f55cu;
}
