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

// Function: entry_0019b744
// Address: 0x19b744 - 0x19b790
void entry_0019b744_0x19b744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b744_0x19b744");
#endif

    ctx->pc = 0x19b744u;

    // 0x19b744: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b748: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x19b748u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19b74c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x19b74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x19b750: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19B750u;
    {
        const bool branch_taken_0x19b750 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x19B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B750u;
        // 0x19b754: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b750) {
            ctx->pc = 0x19B718u;
            return;
        }
    }
    ctx->pc = 0x19B758u;
    // 0x19b758: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19b758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19b75c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19b75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b760: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19b760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19b764: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b768: 0x9463ef60  lhu         $v1, -0x10A0($v1)
    ctx->pc = 0x19b768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963040)));
    // 0x19b76c: 0x24a60014  addiu       $a2, $a1, 0x14
    ctx->pc = 0x19b76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x19b770: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19b770u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b778: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x19b778u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b77c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x19b77cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b780: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19b780u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b784: 0x2408003a  addiu       $t0, $zero, 0x3A
    ctx->pc = 0x19b784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19b788: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x19b788u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b78c: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x19b78cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19b790u;
}
