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

// Function: entry_001513c8
// Address: 0x1513c8 - 0x1513f8
void entry_001513c8_0x1513c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001513c8_0x1513c8");
#endif

    ctx->pc = 0x1513c8u;

    // 0x1513c8: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x1513c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x1513cc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1513ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1513d0: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x1513d0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1513d4: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1513D4u;
    {
        const bool branch_taken_0x1513d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1513D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513D4u;
        // 0x1513d8: 0x92020576  lbu         $v0, 0x576($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1398)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513d4) {
            ctx->pc = 0x1513F8u;
            return;
        }
    }
    ctx->pc = 0x1513DCu;
    // 0x1513dc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1513dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1513e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1513e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1513e4: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1513e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1513e8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1513e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1513ec: 0xc42097e0  lwc1        $f0, -0x6820($at)
    ctx->pc = 0x1513ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1513f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1513F0u;
    {
        const bool branch_taken_0x1513f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1513F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513F0u;
        // 0x1513f4: 0xe60003b4  swc1        $f0, 0x3B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513f0) {
            ctx->pc = 0x151410u;
            return;
        }
    }
    ctx->pc = 0x1513F8u;
}
