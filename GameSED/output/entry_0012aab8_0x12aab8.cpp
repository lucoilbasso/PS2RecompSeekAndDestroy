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

// Function: entry_0012aab8
// Address: 0x12aab8 - 0x12ab10
void entry_0012aab8_0x12aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aab8_0x12aab8");
#endif

    ctx->pc = 0x12aab8u;

    // 0x12aab8: 0x8e4301a4  lw          $v1, 0x1A4($s2)
    ctx->pc = 0x12aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
    // 0x12aabc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12aac0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x12aac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12aac4: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x12AAC4u;
    {
        const bool branch_taken_0x12aac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAC4u;
        // 0x12aac8: 0xae4201a0  sw          $v0, 0x1A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aac4) {
            ctx->pc = 0x12AC04u;
            return;
        }
    }
    ctx->pc = 0x12AACCu;
    // 0x12aacc: 0xae4001a0  sw          $zero, 0x1A0($s2)
    ctx->pc = 0x12aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 0));
    // 0x12aad0: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x12aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x12aad4: 0x244affff  addiu       $t2, $v0, -0x1
    ctx->pc = 0x12aad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12aad8: 0x5940004b  blezl       $t2, . + 4 + (0x4B << 2)
    ctx->pc = 0x12AAD8u;
    {
        const bool branch_taken_0x12aad8 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x12aad8) {
            ctx->pc = 0x12AADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AAD8u;
            // 0x12aadc: 0x8602000a  lh          $v0, 0xA($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AC08u;
            return;
        }
    }
    ctx->pc = 0x12AAE0u;
    // 0x12aae0: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x12aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x12aae4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x12aae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12aae8: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x12aae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12aaec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12aaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12aaf0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12aaf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12aaf4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12aaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12aaf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12aaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12aafc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12aafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12ab00: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x12ab00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12ab04: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x12ab04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12ab08: 0x24e80230  addiu       $t0, $a3, 0x230
    ctx->pc = 0x12ab08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 560));
    // 0x12ab0c: 0x0  nop
    ctx->pc = 0x12ab0cu;
    // NOP
    ctx->pc = 0x12ab10u;
}
