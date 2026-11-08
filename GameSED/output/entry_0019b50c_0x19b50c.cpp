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

// Function: entry_0019b50c
// Address: 0x19b50c - 0x19b560
void entry_0019b50c_0x19b50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b50c_0x19b50c");
#endif

    ctx->pc = 0x19b50cu;

    // 0x19b50c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b510: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x19b510u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19b514: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x19b514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x19b518: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19B518u;
    {
        const bool branch_taken_0x19b518 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x19B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B518u;
        // 0x19b51c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b518) {
            ctx->pc = 0x19B4E0u;
            return;
        }
    }
    ctx->pc = 0x19B520u;
    // 0x19b520: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19b520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19b524: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19b524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b528: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19b528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19b52c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b530: 0x9463ef60  lhu         $v1, -0x10A0($v1)
    ctx->pc = 0x19b530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963040)));
    // 0x19b534: 0x24a60014  addiu       $a2, $a1, 0x14
    ctx->pc = 0x19b534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x19b538: 0xa4a00012  sh          $zero, 0x12($a1)
    ctx->pc = 0x19b538u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b53c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b540: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x19b540u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b548: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x19b548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b54c: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19b54cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b550: 0x2408003a  addiu       $t0, $zero, 0x3A
    ctx->pc = 0x19b550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19b554: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b558: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x19b558u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b55c: 0x0  nop
    ctx->pc = 0x19b55cu;
    // NOP
    ctx->pc = 0x19b560u;
}
