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

// Function: entry_001500cc
// Address: 0x1500cc - 0x150100
void entry_001500cc_0x1500cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001500cc_0x1500cc");
#endif

    ctx->pc = 0x1500ccu;

    // 0x1500cc: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x1500ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1500d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1500d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1500d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1500D4u;
    {
        const bool branch_taken_0x1500d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500D4u;
        // 0x1500d8: 0x3480a  movz        $t1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500d4) {
            ctx->pc = 0x150104u;
            return;
        }
    }
    ctx->pc = 0x1500DCu;
    // 0x1500dc: 0x8d02003c  lw          $v0, 0x3C($t0)
    ctx->pc = 0x1500dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x1500e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1500E0u;
    {
        const bool branch_taken_0x1500e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1500E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500E0u;
        // 0x1500e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500e0) {
            ctx->pc = 0x150100u;
            return;
        }
    }
    ctx->pc = 0x1500E8u;
    // 0x1500e8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1500e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1500ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1500ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1500f0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1500f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1500f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1500F4u;
    {
        const bool branch_taken_0x1500f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500F4u;
        // 0x1500f8: 0xad03003c  sw          $v1, 0x3C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500f4) {
            ctx->pc = 0x150104u;
            return;
        }
    }
    ctx->pc = 0x1500FCu;
    // 0x1500fc: 0x0  nop
    ctx->pc = 0x1500fcu;
    // NOP
    ctx->pc = 0x150100u;
}
