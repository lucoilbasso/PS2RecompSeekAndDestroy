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

// Function: entry_0018fe1c
// Address: 0x18fe1c - 0x18fe68
void entry_0018fe1c_0x18fe1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fe1c_0x18fe1c");
#endif

    ctx->pc = 0x18fe1cu;

    // 0x18fe1c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x18fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18fe20: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x18fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x18fe24: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x18FE24u;
    {
        const bool branch_taken_0x18fe24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE24u;
        // 0x18fe28: 0xfc830000  sd          $v1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe24) {
            ctx->pc = 0x18FE68u;
            return;
        }
    }
    ctx->pc = 0x18FE2Cu;
    // 0x18fe2c: 0x96220150  lhu         $v0, 0x150($s1)
    ctx->pc = 0x18fe2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x18fe30: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x18fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18fe34: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x18fe34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe38: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18fe38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18fe3c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x18fe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x18fe40: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18fe44: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x18fe44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x18fe48: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x18fe48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x18fe4c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x18fe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x18fe50: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18fe54: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x18fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe58: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18fe58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18fe5c: 0xde220160  ld          $v0, 0x160($s1)
    ctx->pc = 0x18fe5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x18fe60: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x18fe60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x18fe64: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x18fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x18fe68u;
}
