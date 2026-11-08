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

// Function: entry_00120208
// Address: 0x120208 - 0x120264
void entry_00120208_0x120208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120208_0x120208");
#endif

    ctx->pc = 0x120208u;

    // 0x120208: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x120208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12020c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x120210: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x120210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x120214: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x120214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x120218: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x120218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12021c: 0x28a6000a  slti        $a2, $a1, 0xA
    ctx->pc = 0x12021cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x120220: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x120220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120224: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x120224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x120228: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x120228u;
    {
        const bool branch_taken_0x120228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120228u;
        // 0x12022c: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120228) {
            ctx->pc = 0x12026Cu;
            return;
        }
    }
    ctx->pc = 0x120230u;
    // 0x120230: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x120230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120234: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x120234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120238: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x120238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x12023c: 0xc4820078  lwc1        $f2, 0x78($a0)
    ctx->pc = 0x12023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x120240: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x120240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x120244: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x120244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x120248: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x120248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12024c: 0x2380b  movn        $a3, $zero, $v0
    ctx->pc = 0x12024cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x120250: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x120250u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x120254: 0xe4810070  swc1        $f1, 0x70($a0)
    ctx->pc = 0x120254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x120258: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x120258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12025c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x12025cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x120260: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x120260u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x120264u;
}
