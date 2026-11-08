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

// Function: entry_0018bde8
// Address: 0x18bde8 - 0x18be48
void entry_0018bde8_0x18bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bde8_0x18bde8");
#endif

    ctx->pc = 0x18bde8u;

    // 0x18bde8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x18bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18bdec: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x18bdecu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bdf0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x18bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18bdf4: 0x2f7300b  movn        $a2, $s7, $s7
    ctx->pc = 0x18bdf4u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 23));
    // 0x18bdf8: 0xafb30088  sw          $s3, 0x88($sp)
    ctx->pc = 0x18bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 19));
    // 0x18bdfc: 0x1840010a  blez        $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x18BDFCu;
    {
        const bool branch_taken_0x18bdfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDFCu;
        // 0x18be00: 0xafa60090  sw          $a2, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdfc) {
            ctx->pc = 0x18C228u;
            return;
        }
    }
    ctx->pc = 0x18BE04u;
    // 0x18be04: 0xdfa400c0  ld          $a0, 0xC0($sp)
    ctx->pc = 0x18be04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18be08: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18be08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18be0c: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x18be0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x18be10: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x18be10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18be14: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18be14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x18be18: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x18be18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18be1c: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x18be1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x18be20: 0xffa200c8  sd          $v0, 0xC8($sp)
    ctx->pc = 0x18be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 2));
    // 0x18be24: 0x2475e750  addiu       $s5, $v1, -0x18B0
    ctx->pc = 0x18be24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960976));
    // 0x18be28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18be28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18be2c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x18be2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x18be30: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x18be30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18be34: 0x8faf00b0  lw          $t7, 0xB0($sp)
    ctx->pc = 0x18be34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18be38: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x18be38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18be3c: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x18be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x18be40: 0x27ae0020  addiu       $t6, $sp, 0x20
    ctx->pc = 0x18be40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18be44: 0x0  nop
    ctx->pc = 0x18be44u;
    // NOP
    ctx->pc = 0x18be48u;
}
