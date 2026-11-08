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

// Function: entry_00124e60
// Address: 0x124e60 - 0x124ebc
void entry_00124e60_0x124e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124e60_0x124e60");
#endif

    ctx->pc = 0x124e60u;

    // 0x124e60: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x124e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x124e64: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124e68: 0x2c6b021  addu        $s6, $s6, $a2
    ctx->pc = 0x124e68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x124e6c: 0x76102a  slt         $v0, $v1, $s6
    ctx->pc = 0x124e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x124e70: 0x1040ff03  beqz        $v0, . + 4 + (-0xFD << 2)
    ctx->pc = 0x124E70u;
    {
        const bool branch_taken_0x124e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E70u;
        // 0x124e74: 0x4618a500  add.s       $f20, $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e70) {
            ctx->pc = 0x124A80u;
            return;
        }
    }
    ctx->pc = 0x124E78u;
    // 0x124e78: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x124E78u;
    {
        const bool branch_taken_0x124e78 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x124E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E78u;
        // 0x124e7c: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e78) {
            ctx->pc = 0x124EBCu;
            return;
        }
    }
    ctx->pc = 0x124E80u;
    // 0x124e80: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x124e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124e84: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124e88: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x124e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x124e8c: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x124e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x124e90: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x124e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x124e94: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x124e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x124e98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124e9c: 0x24034242  addiu       $v1, $zero, 0x4242
    ctx->pc = 0x124e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16962));
    // 0x124ea0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x124ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124ea4: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x124ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x124ea8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x124ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124eac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x124eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x124eb0: 0xfee30008  sd          $v1, 0x8($s7)
    ctx->pc = 0x124eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 3));
    // 0x124eb4: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x124eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x124eb8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x124eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    ctx->pc = 0x124ebcu;
}
