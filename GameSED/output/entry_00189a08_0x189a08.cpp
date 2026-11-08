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

// Function: entry_00189a08
// Address: 0x189a08 - 0x189a58
void entry_00189a08_0x189a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189a08_0x189a08");
#endif

    switch (ctx->pc) {
        case 0x189a38u: goto label_189a38;
        default: break;
    }

    ctx->pc = 0x189a08u;

    // 0x189a08: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x189a08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x189a0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189a10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189a18: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x189a18u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x189a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x189a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a20: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x189a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x189a24: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x189a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a28: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x189a28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x189a2c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x189a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a30: 0xc062786  jal         func_189E18
    ctx->pc = 0x189A30u;
    SET_GPR_U32(ctx, 31, 0x189A38u);
    ctx->pc = 0x189A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A30u;
    // 0x189a34: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E18u, 0x189A30u, 0x189A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A38u;
label_189a38:
    // 0x189a38: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x189a38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x189a3c: 0x5040007c  beql        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x189A3Cu;
    {
        const bool branch_taken_0x189a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a3c) {
            ctx->pc = 0x189A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189A3Cu;
            // 0x189a40: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189C30u;
            return;
        }
    }
    ctx->pc = 0x189A44u;
    // 0x189a44: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x189a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x189a48: 0xafb10068  sw          $s1, 0x68($sp)
    ctx->pc = 0x189a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 17));
    // 0x189a4c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x189a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x189a50: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x189a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a54: 0x0  nop
    ctx->pc = 0x189a54u;
    // NOP
    ctx->pc = 0x189a58u;
}
