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

// Function: caseD_5
// Address: 0x1342e0 - 0x134310
void caseD_5_0x1342e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1342e0");
#endif

    ctx->pc = 0x1342e0u;

    // 0x1342e0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1342e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1342e4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1342e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1342e8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x1342e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x1342ec: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1342ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1342f0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1342f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1342f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1342f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1342f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1342f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1342fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1342fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134300: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134300u;
    {
        const bool branch_taken_0x134300 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x134304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134300u;
        // 0x134304: 0xc2880a  movz        $s1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134300) {
            ctx->pc = 0x134310u;
            return;
        }
    }
    ctx->pc = 0x134308u;
    // 0x134308: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134308u;
    SET_GPR_U32(ctx, 31, 0x134310u);
    ctx->pc = 0x13430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134308u;
    // 0x13430c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134308u, 0x134310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134310u;
}
