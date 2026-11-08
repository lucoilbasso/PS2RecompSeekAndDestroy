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

// Function: GetFontGdCell__9WcFontManUi
// Address: 0x17c8e0 - 0x17c900
void GetFontGdCell__9WcFontManUi_0x17c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFontGdCell__9WcFontManUi_0x17c8e0");
#endif

    ctx->pc = 0x17c8e0u;

    // 0x17c8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c8e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17c8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c8ec: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17c8f0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x17c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17c8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c8f8: 0x8060fb4  j           func_183ED0
    ctx->pc = 0x17C8F8u;
    ctx->pc = 0x17C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8F8u;
    // 0x17c8fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183ED0u;
    GetGdCellAddress__6WcFont_0x183ed0(rdram, ctx, runtime); return;
    ctx->pc = 0x17C900u;
}
