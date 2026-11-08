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

// Function: entry_00191edc
// Address: 0x191edc - 0x191f44
void entry_00191edc_0x191edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191edc_0x191edc");
#endif

    ctx->pc = 0x191edcu;

    // 0x191edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ee0: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x191ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x191ee4: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x191ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x191ee8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x191ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x191eec: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x191eecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x191ef0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x191ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x191ef4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x191ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x191ef8: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x191EF8u;
    {
        const bool branch_taken_0x191ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EF8u;
        // 0x191efc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ef8) {
            ctx->pc = 0x191F44u;
            return;
        }
    }
    ctx->pc = 0x191F00u;
    // 0x191f00: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x191f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191f04: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x191f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x191f08: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x191f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x191f0c: 0x94a20150  lhu         $v0, 0x150($a1)
    ctx->pc = 0x191f0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x191f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f14: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x191f14u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x191f18: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x191f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x191f1c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x191f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x191f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f24: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x191f24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x191f28: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x191f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x191f2c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x191f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x191f30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x191f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x191f34: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x191f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191f38: 0xdca20160  ld          $v0, 0x160($a1)
    ctx->pc = 0x191f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x191f3c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x191f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x191f40: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x191f40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x191f44u;
}
