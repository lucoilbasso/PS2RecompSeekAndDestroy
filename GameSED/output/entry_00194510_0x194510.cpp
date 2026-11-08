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

// Function: entry_00194510
// Address: 0x194510 - 0x19456c
void entry_00194510_0x194510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194510_0x194510");
#endif

    ctx->pc = 0x194510u;

    // 0x194510: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x194510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x194514: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x194514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x194518: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x194518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x19451c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x19451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x194520: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x194520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x194524: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x194524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x194528: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x194528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x19452c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x194530: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x194530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x194534: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x194534u;
    {
        const bool branch_taken_0x194534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x194538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194534u;
        // 0x194538: 0x26960150  addiu       $s6, $s4, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194534) {
            ctx->pc = 0x19459Cu;
            return;
        }
    }
    ctx->pc = 0x19453Cu;
    // 0x19453c: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x19453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x194540: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x194540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x194544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x194544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194548: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x194548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19454c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19454cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x194550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194554: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x194554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x194558: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x194558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19455c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x19455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x194560: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x194560u;
    {
        const bool branch_taken_0x194560 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x194564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194560u;
        // 0x194564: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194560) {
            ctx->pc = 0x19456Cu;
            return;
        }
    }
    ctx->pc = 0x194568u;
    // 0x194568: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x194568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x19456cu;
}
