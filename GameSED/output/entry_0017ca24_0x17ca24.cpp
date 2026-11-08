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

// Function: entry_0017ca24
// Address: 0x17ca24 - 0x17ca48
void entry_0017ca24_0x17ca24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ca24_0x17ca24");
#endif

    ctx->pc = 0x17ca24u;

    // 0x17ca24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17ca28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ca28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ca2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17ca30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ca30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ca34: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x17ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17ca38: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17ca38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ca3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ca40: 0x8061004  j           func_184010
    ctx->pc = 0x17CA40u;
    ctx->pc = 0x17CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA40u;
    // 0x17ca44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184010u;
    GetFontProAddress__6WcFontUs_0x184010(rdram, ctx, runtime); return;
    ctx->pc = 0x17CA48u;
}
