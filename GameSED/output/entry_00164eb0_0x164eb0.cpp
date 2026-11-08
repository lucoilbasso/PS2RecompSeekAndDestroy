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

// Function: entry_00164eb0
// Address: 0x164eb0 - 0x164ec8
void entry_00164eb0_0x164eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164eb0_0x164eb0");
#endif

    ctx->pc = 0x164eb0u;

    // 0x164eb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164eb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x164eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x164ebc: 0x26041234  addiu       $a0, $s0, 0x1234
    ctx->pc = 0x164ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4660));
    // 0x164ec0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164ec4: 0x0  nop
    ctx->pc = 0x164ec4u;
    // NOP
    ctx->pc = 0x164ec8u;
}
