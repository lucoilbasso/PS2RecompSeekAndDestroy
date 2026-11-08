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

// Function: entry_0013bb80
// Address: 0x13bb80 - 0x13bbe8
void entry_0013bb80_0x13bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bb80_0x13bb80");
#endif

    ctx->pc = 0x13bb80u;

    // 0x13bb80: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x13BB80u;
    {
        const bool branch_taken_0x13bb80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB80u;
        // 0x13bb84: 0x8eb50000  lw          $s5, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb80) {
            ctx->pc = 0x13BCBCu;
            return;
        }
    }
    ctx->pc = 0x13BB88u;
    // 0x13bb88: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13bb8c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x13BB8Cu;
    {
        const bool branch_taken_0x13bb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb8c) {
            ctx->pc = 0x13BCBCu;
            return;
        }
    }
    ctx->pc = 0x13BB94u;
    // 0x13bb94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bb98: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x13BB98u;
    {
        const bool branch_taken_0x13bb98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb98) {
            ctx->pc = 0x13BCBCu;
            return;
        }
    }
    ctx->pc = 0x13BBA0u;
    // 0x13bba0: 0x12320046  beq         $s1, $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x13BBA0u;
    {
        const bool branch_taken_0x13bba0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x13bba0) {
            ctx->pc = 0x13BCBCu;
            return;
        }
    }
    ctx->pc = 0x13BBA8u;
    // 0x13bba8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x13bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x13bbac: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x13bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x13bbb0: 0x30421f00  andi        $v0, $v0, 0x1F00
    ctx->pc = 0x13bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7936);
    // 0x13bbb4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x13bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x13bbb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13bbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13bbbc: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x13BBBCu;
    {
        const bool branch_taken_0x13bbbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bbbc) {
            ctx->pc = 0x13BCBCu;
            return;
        }
    }
    ctx->pc = 0x13BBC4u;
    // 0x13bbc4: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x13bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x13bbc8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BBC8u;
    {
        const bool branch_taken_0x13bbc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bbc8) {
            ctx->pc = 0x13BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BBC8u;
            // 0x13bbcc: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BBE8u;
            return;
        }
    }
    ctx->pc = 0x13BBD0u;
    // 0x13bbd0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x13bbd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bbd4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x13bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x13bbd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13bbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13bbdc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x13BBDCu;
    {
        const bool branch_taken_0x13bbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bbdc) {
            ctx->pc = 0x13BCBCu;
            return;
        }
    }
    ctx->pc = 0x13BBE4u;
    // 0x13bbe4: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x13bbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
    ctx->pc = 0x13bbe8u;
}
