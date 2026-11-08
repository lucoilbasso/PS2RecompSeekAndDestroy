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

// Function: entry_001606b4
// Address: 0x1606b4 - 0x1606d8
void entry_001606b4_0x1606b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001606b4_0x1606b4");
#endif

    ctx->pc = 0x1606b4u;

    // 0x1606b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1606b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1606b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1606b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1606bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1606bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1606c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1606c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1606c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1606c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1606c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1606c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1606cc: 0x8057a12  j           func_15E848
    ctx->pc = 0x1606CCu;
    ctx->pc = 0x1606D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606CCu;
    // 0x1606d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E848u;
    BossDamageVisible__8ApcPanelb_0x15e848(rdram, ctx, runtime); return;
    ctx->pc = 0x1606D4u;
    // 0x1606d4: 0x0  nop
    ctx->pc = 0x1606d4u;
    // NOP
    ctx->pc = 0x1606d8u;
}
