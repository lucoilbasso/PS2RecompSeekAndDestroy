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

// Function: entry_001c39f0
// Address: 0x1c39f0 - 0x1c3a64
void entry_001c39f0_0x1c39f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c39f0_0x1c39f0");
#endif

    ctx->pc = 0x1c39f0u;

    // 0x1c39f0: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x1c39f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1c39f4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1c39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c39f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c39fc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c39fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c3a00: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C3A00u;
    {
        const bool branch_taken_0x1c3a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A00u;
        // 0x1c3a04: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a00) {
            ctx->pc = 0x1C3A64u;
            return;
        }
    }
    ctx->pc = 0x1C3A08u;
    // 0x1c3a08: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x1c3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1c3a0c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1c3a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1c3a10: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1c3a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c3a14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c3a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c3a18: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1c3a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3a1c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1c3a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1c3a20: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x1c3a20u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4));
    // 0x1c3a24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3a28: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1c3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1c3a2c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1c3a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1c3a30: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x1c3a30u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 5));
    // 0x1c3a34: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1c3a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1c3a38: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x1c3a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x1c3a3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c3a3cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
    // 0x1c3a40: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x1c3a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x1c3a44: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x1c3a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x1c3a48: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1c3a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1c3a4c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x1c3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1c3a50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3a54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c3a58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c3a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c3a5c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C3A5Cu;
    {
        const bool branch_taken_0x1c3a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A5Cu;
        // 0x1c3a60: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a5c) {
            ctx->pc = 0x1C3AC8u;
            return;
        }
    }
    ctx->pc = 0x1C3A64u;
}
