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

// Function: entry_00153278
// Address: 0x153278 - 0x1532a8
void entry_00153278_0x153278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153278_0x153278");
#endif

    ctx->pc = 0x153278u;

    // 0x153278: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x153278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x15327c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x153280: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x153280u;
    {
        const bool branch_taken_0x153280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153280) {
            ctx->pc = 0x1532A8u;
            return;
        }
    }
    ctx->pc = 0x153288u;
    // 0x153288: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x153288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x15328c: 0x8c621ab4  lw          $v0, 0x1AB4($v1)
    ctx->pc = 0x15328cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6836)));
    // 0x153290: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x153290u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x153294: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x153294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x153298: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x153298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x15329c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15329Cu;
    {
        const bool branch_taken_0x15329c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1532A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15329Cu;
        // 0x1532a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15329c) {
            ctx->pc = 0x1532A8u;
            return;
        }
    }
    ctx->pc = 0x1532A4u;
    // 0x1532a4: 0xae220850  sw          $v0, 0x850($s1)
    ctx->pc = 0x1532a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
    ctx->pc = 0x1532a8u;
}
