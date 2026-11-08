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

// Function: entry_0019b60c
// Address: 0x19b60c - 0x19b670
void entry_0019b60c_0x19b60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b60c_0x19b60c");
#endif

    ctx->pc = 0x19b60cu;

    // 0x19b60c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b610: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x19b610u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19b614: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x19b614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x19b618: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19B618u;
    {
        const bool branch_taken_0x19b618 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x19B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B618u;
        // 0x19b61c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b618) {
            ctx->pc = 0x19B5E0u;
            return;
        }
    }
    ctx->pc = 0x19B620u;
    // 0x19b620: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x19b620u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b624: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19b624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19b628: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x19b628u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b62c: 0xa4a00004  sh          $zero, 0x4($a1)
    ctx->pc = 0x19b62cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b630: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x19b630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x19b634: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x19b634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x19b638: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19b638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19b63c: 0x9484ef60  lhu         $a0, -0x10A0($a0)
    ctx->pc = 0x19b63cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963040)));
    // 0x19b640: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x19b640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b644: 0xa4a00012  sh          $zero, 0x12($a1)
    ctx->pc = 0x19b644u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b648: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B648u;
    {
        const bool branch_taken_0x19b648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B648u;
        // 0x19b64c: 0xa4a40010  sh          $a0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b648) {
            ctx->pc = 0x19B670u;
            return;
        }
    }
    ctx->pc = 0x19B650u;
    // 0x19b650: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x19b650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19b654: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19b658: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x19b658u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b65c: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x19b65cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b660: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x19b660u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b664: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x19b664u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b668: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x19b668u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b66c: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x19b66cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19b670u;
}
