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

// Function: entry_0015af18
// Address: 0x15af18 - 0x15af58
void entry_0015af18_0x15af18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015af18_0x15af18");
#endif

    ctx->pc = 0x15af18u;

    // 0x15af18: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x15AF18u;
    {
        const bool branch_taken_0x15af18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF18u;
        // 0x15af1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af18) {
            ctx->pc = 0x15AF90u;
            return;
        }
    }
    ctx->pc = 0x15AF20u;
    // 0x15af20: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x15af20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x15af24: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x15af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x15af28: 0xa81826  xor         $v1, $a1, $t0
    ctx->pc = 0x15af28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x15af2c: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x15af2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x15af30: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x15af30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x15af34: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x15af34u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x15af38: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x15af38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15af3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15AF3Cu;
    {
        const bool branch_taken_0x15af3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF3Cu;
        // 0x15af40: 0xae04003c  sw          $a0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af3c) {
            ctx->pc = 0x15AF58u;
            return;
        }
    }
    ctx->pc = 0x15AF44u;
    // 0x15af44: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15af44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15af48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15af48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15af4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15AF4Cu;
    {
        const bool branch_taken_0x15af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF4Cu;
        // 0x15af50: 0xae08003c  sw          $t0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af4c) {
            ctx->pc = 0x15AF70u;
            return;
        }
    }
    ctx->pc = 0x15AF54u;
    // 0x15af54: 0x0  nop
    ctx->pc = 0x15af54u;
    // NOP
    ctx->pc = 0x15af58u;
}
