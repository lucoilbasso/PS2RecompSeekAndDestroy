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

// Function: entry_00126ff8
// Address: 0x126ff8 - 0x127058
void entry_00126ff8_0x126ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126ff8_0x126ff8");
#endif

    switch (ctx->pc) {
        case 0x12702cu: goto label_12702c;
        default: break;
    }

    ctx->pc = 0x126ff8u;

    // 0x126ff8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x126ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x126ffc: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x126ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127000: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x127000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127004: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x127004u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x127008: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x127008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12700c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x12700cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x127010: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x127010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127014: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127018: 0x7faa0100  sq          $t2, 0x100($sp)
    ctx->pc = 0x127018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 10));
    // 0x12701c: 0x7faf0110  sq          $t7, 0x110($sp)
    ctx->pc = 0x12701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 15));
    // 0x127020: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x127020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x127024: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x127024u;
    SET_GPR_U32(ctx, 31, 0x12702Cu);
    ctx->pc = 0x127028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127024u;
    // 0x127028: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x127024u, 0x12702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12702Cu;
label_12702c:
    // 0x12702c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x12702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x127030: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x127030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x127034: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x127034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x127038: 0x7baf0110  lq          $t7, 0x110($sp)
    ctx->pc = 0x127038u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12703c: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x12703cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x127040: 0x7baa0100  lq          $t2, 0x100($sp)
    ctx->pc = 0x127040u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x127044: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127048: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x127048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12704c: 0x43282b  sltu        $a1, $v0, $v1
    ctx->pc = 0x12704cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x127050: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x127050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x127054: 0x0  nop
    ctx->pc = 0x127054u;
    // NOP
    ctx->pc = 0x127058u;
}
