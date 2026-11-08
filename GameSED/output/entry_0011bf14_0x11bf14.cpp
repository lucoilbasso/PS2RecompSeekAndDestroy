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

// Function: entry_0011bf14
// Address: 0x11bf14 - 0x11bf88
void entry_0011bf14_0x11bf14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bf14_0x11bf14");
#endif

    ctx->pc = 0x11bf14u;

label_11bf14:
    // 0x11bf14: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x11bf14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bf18: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x11bf18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11bf1c: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x11bf1cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11bf20: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x11bf20u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11bf24: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x11bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x11bf28: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x11bf28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x11bf2c: 0xfe060010  sd          $a2, 0x10($s0)
    ctx->pc = 0x11bf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 6));
    // 0x11bf30: 0xfe070018  sd          $a3, 0x18($s0)
    ctx->pc = 0x11bf30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 7));
    // 0x11bf34: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x11bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x11bf38: 0x0  nop
    ctx->pc = 0x11bf38u;
    // NOP
    // 0x11bf3c: 0x0  nop
    ctx->pc = 0x11bf3cu;
    // NOP
    // 0x11bf40: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11BF40u;
    {
        const bool branch_taken_0x11bf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF40u;
        // 0x11bf44: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf40) {
            ctx->pc = 0x11BF14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bf14;
        }
    }
    ctx->pc = 0x11BF48u;
    // 0x11bf48: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x11bf48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bf4c: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x11bf4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11bf50: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x11bf50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x11bf54: 0x26e70014  addiu       $a3, $s7, 0x14
    ctx->pc = 0x11bf54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x11bf58: 0x2408006d  addiu       $t0, $zero, 0x6D
    ctx->pc = 0x11bf58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x11bf5c: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x11bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x11bf60: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x11bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11bf64: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x11bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11bf68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bf6c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x11bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x11bf70: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x11bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x11bf74: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x11bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x11bf78: 0x26a60e30  addiu       $a2, $s5, 0xE30
    ctx->pc = 0x11bf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 3632));
    // 0x11bf7c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x11bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x11bf80: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x11bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
    // 0x11bf84: 0x0  nop
    ctx->pc = 0x11bf84u;
    // NOP
    ctx->pc = 0x11bf88u;
}
