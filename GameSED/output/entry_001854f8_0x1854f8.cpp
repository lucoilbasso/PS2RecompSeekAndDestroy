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

// Function: entry_001854f8
// Address: 0x1854f8 - 0x185580
void entry_001854f8_0x1854f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001854f8_0x1854f8");
#endif

    switch (ctx->pc) {
        case 0x185558u: goto label_185558;
        default: break;
    }

    ctx->pc = 0x1854f8u;

    // 0x1854f8: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x1854f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1854fc: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1854fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x185500: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x185500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x185504: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x185504u;
    {
        const bool branch_taken_0x185504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185504) {
            ctx->pc = 0x1855E8u;
            return;
        }
    }
    ctx->pc = 0x18550Cu;
    // 0x18550c: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x18550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x185510: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x185510u;
    {
        const bool branch_taken_0x185510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185510) {
            ctx->pc = 0x1855E8u;
            return;
        }
    }
    ctx->pc = 0x185518u;
    // 0x185518: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x185518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x18551c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x185520: 0x571824  and         $v1, $v0, $s7
    ctx->pc = 0x185520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x185524: 0x5460001e  bnel        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x185524u;
    {
        const bool branch_taken_0x185524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185524) {
            ctx->pc = 0x185528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185524u;
            // 0x185528: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1855A0u;
            return;
        }
    }
    ctx->pc = 0x18552Cu;
    // 0x18552c: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x18552cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x185530: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x185530u;
    {
        const bool branch_taken_0x185530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185530) {
            ctx->pc = 0x185534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185530u;
            // 0x185534: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1855A0u;
            return;
        }
    }
    ctx->pc = 0x185538u;
    // 0x185538: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18553c: 0x3412e000  ori         $s2, $zero, 0xE000
    ctx->pc = 0x18553cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x185540: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x185540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x185544: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x185544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x185548: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x185548u;
    {
        const bool branch_taken_0x185548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185548u;
        // 0x18554c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185548) {
            ctx->pc = 0x185590u;
            return;
        }
    }
    ctx->pc = 0x185550u;
    // 0x185550: 0xc061390  jal         func_184E40
    ctx->pc = 0x185550u;
    SET_GPR_U32(ctx, 31, 0x185558u);
    ctx->pc = 0x185554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185550u;
    // 0x185554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184E40u, 0x185550u, 0x185558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185558u;
label_185558:
    // 0x185558: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x185558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x18555c: 0x721024  and         $v0, $v1, $s2
    ctx->pc = 0x18555cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x185560: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x185560u;
    {
        const bool branch_taken_0x185560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185560u;
        // 0x185564: 0x30621fff  andi        $v0, $v1, 0x1FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185560) {
            ctx->pc = 0x185590u;
            return;
        }
    }
    ctx->pc = 0x185568u;
    // 0x185568: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x185568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18556c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x18556cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x185570: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x185570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185574: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185574u;
    {
        const bool branch_taken_0x185574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185574u;
        // 0x185578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185574) {
            ctx->pc = 0x185590u;
            return;
        }
    }
    ctx->pc = 0x18557Cu;
    // 0x18557c: 0x0  nop
    ctx->pc = 0x18557cu;
    // NOP
    ctx->pc = 0x185580u;
}
