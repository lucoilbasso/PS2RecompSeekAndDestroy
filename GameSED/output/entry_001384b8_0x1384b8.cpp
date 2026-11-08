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

// Function: entry_001384b8
// Address: 0x1384b8 - 0x138530
void entry_001384b8_0x1384b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001384b8_0x1384b8");
#endif

    switch (ctx->pc) {
        case 0x1384f4u: goto label_1384f4;
        default: break;
    }

    ctx->pc = 0x1384b8u;

label_1384b8:
    // 0x1384b8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1384b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1384bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1384bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1384c0: 0x0  nop
    ctx->pc = 0x1384c0u;
    // NOP
    // 0x1384c4: 0x0  nop
    ctx->pc = 0x1384c4u;
    // NOP
    // 0x1384c8: 0x0  nop
    ctx->pc = 0x1384c8u;
    // NOP
    // 0x1384cc: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1384CCu;
    {
        const bool branch_taken_0x1384cc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1384D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384CCu;
        // 0x1384d0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384cc) {
            ctx->pc = 0x1384B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1384b8;
        }
    }
    ctx->pc = 0x1384D4u;
    // 0x1384d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1384d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1384d8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1384d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1384dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1384e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1384e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384e4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1384e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1384e8: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x1384e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x1384ec: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x1384ECu;
    SET_GPR_U32(ctx, 31, 0x1384F4u);
    ctx->pc = 0x1384F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1384ECu;
    // 0x1384f0: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x1384ECu, 0x1384F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1384F4u;
label_1384f4:
    // 0x1384f4: 0x18400062  blez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1384F4u;
    {
        const bool branch_taken_0x1384f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1384F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384F4u;
        // 0x1384f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384f4) {
            ctx->pc = 0x138680u;
            return;
        }
    }
    ctx->pc = 0x1384FCu;
    // 0x1384fc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1384fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x138500: 0x246abc50  addiu       $t2, $v1, -0x43B0
    ctx->pc = 0x138500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949968));
    // 0x138504: 0x8d420400  lw          $v0, 0x400($t2)
    ctx->pc = 0x138504u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x138508: 0x18400044  blez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x138508u;
    {
        const bool branch_taken_0x138508 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138508u;
        // 0x13850c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138508) {
            ctx->pc = 0x13861Cu;
            return;
        }
    }
    ctx->pc = 0x138510u;
    // 0x138510: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138514: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x138514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x138518: 0x244ba408  addiu       $t3, $v0, -0x5BF8
    ctx->pc = 0x138518u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943752));
    // 0x13851c: 0x246ea3e0  addiu       $t6, $v1, -0x5C20
    ctx->pc = 0x13851cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943712));
    // 0x138520: 0x240d0118  addiu       $t5, $zero, 0x118
    ctx->pc = 0x138520u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x138524: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x138524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138528: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x138528u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13852c: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x13852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    ctx->pc = 0x138530u;
}
