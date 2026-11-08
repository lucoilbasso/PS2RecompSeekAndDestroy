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

// Function: entry_001ae5f0
// Address: 0x1ae5f0 - 0x1ae664
void entry_001ae5f0_0x1ae5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae5f0_0x1ae5f0");
#endif

    ctx->pc = 0x1ae5f0u;

    // 0x1ae5f0: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x1ae5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x1ae5f4: 0x14b4021  addu        $t0, $t2, $t3
    ctx->pc = 0x1ae5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1ae5f8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1ae5f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1ae5fc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1ae5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ae600: 0x31702  srl         $v0, $v1, 28
    ctx->pc = 0x1ae600u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x1ae604: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AE604u;
    {
        const bool branch_taken_0x1ae604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE604u;
        // 0x1ae608: 0x672824  and         $a1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae604) {
            ctx->pc = 0x1AE680u;
            return;
        }
    }
    ctx->pc = 0x1AE60Cu;
    // 0x1ae60c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x1ae60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1ae610: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AE610u;
    {
        const bool branch_taken_0x1ae610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae610) {
            ctx->pc = 0x1AE614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE610u;
            // 0x1ae614: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE684u;
            return;
        }
    }
    ctx->pc = 0x1AE618u;
    // 0x1ae618: 0x11250012  beq         $t1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AE618u;
    {
        const bool branch_taken_0x1ae618 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE618u;
        // 0x1ae61c: 0x25240001  addiu       $a0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae618) {
            ctx->pc = 0x1AE664u;
            return;
        }
    }
    ctx->pc = 0x1AE620u;
    // 0x1ae620: 0xa91823  subu        $v1, $a1, $t1
    ctx->pc = 0x1ae620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ae624: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1ae624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ae628: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x1ae628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x1ae62c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ae62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ae630: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ae630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ae634: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1ae634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1ae638: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1ae638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1ae63c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ae640: 0x1273024  and         $a2, $t1, $a3
    ctx->pc = 0x1ae640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1ae644: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1ae644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ae648: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ae648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae64c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1ae64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1ae650: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ae650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ae654: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1ae654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ae658: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1ae658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ae65c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ae65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ae660: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1ae660u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1ae664u;
}
