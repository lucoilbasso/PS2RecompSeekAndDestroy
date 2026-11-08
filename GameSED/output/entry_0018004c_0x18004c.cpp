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

// Function: entry_0018004c
// Address: 0x18004c - 0x180094
void entry_0018004c_0x18004c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018004c_0x18004c");
#endif

    ctx->pc = 0x18004cu;

    // 0x18004c: 0x29620005  slti        $v0, $t3, 0x5
    ctx->pc = 0x18004cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x180050: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x180050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x180054: 0x2580a  movz        $t3, $zero, $v0
    ctx->pc = 0x180054u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x180058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18005c: 0xa0cb000f  sb          $t3, 0xF($a2)
    ctx->pc = 0x18005cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 11));
    // 0x180060: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x180060u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x180064: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x180064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x180068: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x180068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x18006c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18006cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180070: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x180070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180074: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x180074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x180078: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x180078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x18007c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18007cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x180080: 0x15a00004  bnez        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x180080u;
    {
        const bool branch_taken_0x180080 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x180084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180080u;
        // 0x180084: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180080) {
            ctx->pc = 0x180094u;
            return;
        }
    }
    ctx->pc = 0x180088u;
    // 0x180088: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x180088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x18008c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18008cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180090: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x180090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->pc = 0x180094u;
}
