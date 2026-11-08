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

// Function: entry_0015eba8
// Address: 0x15eba8 - 0x15ebe8
void entry_0015eba8_0x15eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eba8_0x15eba8");
#endif

    ctx->pc = 0x15eba8u;

    // 0x15eba8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x15eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x15ebac: 0x8c64b830  lw          $a0, -0x47D0($v1)
    ctx->pc = 0x15ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x15ebb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ebb4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15ebb8: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x15ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15ebbc: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x15ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x15ebc0: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x15ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x15ebc4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x15ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x15ebc8: 0x8e230204  lw          $v1, 0x204($s1)
    ctx->pc = 0x15ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x15ebcc: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15ebd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15ebd4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15ebd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x15ebd8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15EBD8u;
    {
        const bool branch_taken_0x15ebd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBD8u;
        // 0x15ebdc: 0xae230204  sw          $v1, 0x204($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebd8) {
            ctx->pc = 0x15EC50u;
            return;
        }
    }
    ctx->pc = 0x15EBE0u;
    // 0x15ebe0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15EBE0u;
    {
        const bool branch_taken_0x15ebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBE0u;
        // 0x15ebe4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebe0) {
            ctx->pc = 0x15EC38u;
            return;
        }
    }
    ctx->pc = 0x15EBE8u;
}
