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

// Function: entry_001770f8
// Address: 0x1770f8 - 0x177140
void entry_001770f8_0x1770f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001770f8_0x1770f8");
#endif

    switch (ctx->pc) {
        case 0x17712cu: goto label_17712c;
        case 0x177134u: goto label_177134;
        default: break;
    }

    ctx->pc = 0x1770f8u;

    // 0x1770f8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1770f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1770fc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1770fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x177100: 0x2442cf00  addiu       $v0, $v0, -0x3100
    ctx->pc = 0x177100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954752));
    // 0x177104: 0xdc430060  ld          $v1, 0x60($v0)
    ctx->pc = 0x177104u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x26CF60u));
    // 0x177108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17710c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x17710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x177110: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x177110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177114: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x177114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x177118: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x177118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17711c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x17711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x177120: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x177120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177124: 0xc06bf56  jal         func_1AFD58
    ctx->pc = 0x177124u;
    SET_GPR_U32(ctx, 31, 0x17712Cu);
    ctx->pc = 0x177128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177124u;
    // 0x177128: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD58u, 0x177124u, 0x17712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17712Cu;
label_17712c:
    // 0x17712c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17712Cu;
    SET_GPR_U32(ctx, 31, 0x177134u);
    ctx->pc = 0x177130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17712Cu;
    // 0x177130: 0x8f848c64  lw          $a0, -0x739C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17712Cu, 0x177134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177134u;
label_177134:
    // 0x177134: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x177134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x177138: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x177138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x17713c: 0x0  nop
    ctx->pc = 0x17713cu;
    // NOP
    ctx->pc = 0x177140u;
}
